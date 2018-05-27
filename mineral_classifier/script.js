'use strict';


async function run_entry() {
    try {
        await run();
        log('Run finished');

    } catch (error) {
        log('Error: ' + error);
    }
}

function log(msg) {
    let msg_node = document.getElementById('messages');
    msg_node.appendChild(document.createElement('br'));
    msg_node.appendChild(document.createTextNode(msg));
}

function displayLog() {
    var mes = document.getElementById("messages");
    var but = document.getElementById("Logb");
    if (mes.style.display === "none"){
        mes.style.display = "block";
        but.innerHTML = "Display Log Off";
    } else {
        mes.style.display = "none";
        but.innerHTML = "Display Log On";
    }
}

async function loadImage() {
    let imageData = await WebDNN.Image.getImageArray(document.getElementById('file'), {dstW: 224, dstH: 224});
    WebDNN.Image.setImageArrayToCanvas(imageData, 224, 224, document.getElementById('input_image'));

    var canvas = document.getElementById('name_image')
    canvas.style.display = "none";
    var ctx = canvas.getContext("2d");
    ctx.clearRect(0, 0, canvas.width, canvas.height);

    document.getElementById('run_button').disabled = false;
    log('Image loaded to canvas');
}


async function loadRandImage() {
    let min_index = Math.floor((Math.random() * imagenet_labels.length) + 1); 
    let img_index = Math.floor((Math.random() * 4) + 0); 
    let mineral_name = imagenet_labels[min_index]
    let filename = '/mineral_classifier/data/' + mineral_name + '_' + ("000" + img_index).slice (-4) + '.jpg';
    console.log(filename)
    let imageData = await WebDNN.Image.getImageArray(filename, {dstW: 224, dstH: 224});
    WebDNN.Image.setImageArrayToCanvas(imageData, 224, 224, document.getElementById('input_image'));

    var canvas = document.getElementById('name_image')
    canvas.style.display = "block";
    var ctx = canvas.getContext("2d");
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    ctx.font = "20px Arial";
    ctx.textAlign="center";
    ctx.fillText(mineral_name,224/2,20);

    document.getElementById('run_button').disabled = false;
    log('Image loaded to canvas');
}

let runners = {};

function getFrameworkName() {
    return 'keras';
}

async function prepare_run() {
    let backend_name = 'webgl';
    let framework_name = getFrameworkName();
    let backend_key = backend_name + framework_name;
    if (!(backend_key in runners)) {
        log('Initializing and loading model');
        log(`./output_${framework_name}`, {backendOrder: backend_name});
        let runner = await WebDNN.load(`./output_${framework_name}_31443`, {backendOrder: backend_name});
        log(`Loaded backend: ${runner.backendName}, model converted from ${framework_name}`);

        runners[backend_key] = runner;
    } else {
        log('Model is already loaded');
    }
    return runners[backend_key];
}

async function run() {
    let runner = await prepare_run();

    runner.inputs[0].set(await WebDNN.Image.getImageArray(document.getElementById('input_image'), {
        dstW: 223, dstH: 223,
        order: WebDNN.Image.Order.HWC,
        color: WebDNN.Image.Color.BGR,
        bias: [122.679, 116.669, 104.006] // RGB mean (not BGR)
    }));

    let start = performance.now();
    await runner.run();
    let elapsed_time = performance.now() - start;

    let out_vec = runner.outputs[0].toActual();
    let top_labels = WebDNN.Math.argmax(out_vec, 10);

    let predicted_str = 'Predicted: <br>';
    for (let j = 0; j < top_labels.length; j++) {
        predicted_str += `${top_labels[j]}` 
        predicted_str += ': '
        predicted_str += `${imagenet_labels[top_labels[j]]}` + ' ' 
        predicted_str += `(${Math.floor(out_vec[top_labels[j]] * 100)}%)`;
        predicted_str += '<br>';
    }
    
    document.getElementById('result').innerHTML = predicted_str;
}
