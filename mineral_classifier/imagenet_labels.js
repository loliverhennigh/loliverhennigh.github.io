var imagenet_labels=['adamite', 'almandine', 'anatase', 'andradite', 'aragonite', 'azurite', 'baryte', 'beryl', 'calcite', 'cassiterite', 'celestine', 'cerussite', 'chalcedony', 'copper', 'corundum', 'elbaite', 'epidote', 'fluorapatite', 'fluorite', 'galena', 'goethite', 'gold', 'grossular', 'gypsum', 'hematite', 'hemimorphite', 'malachite', 'mimetite', 'opal', 'prehnite', 'pyrite', 'pyromorphite', 'quartz', 'rhodochrosite', 'rutile', 'silver', 'smithsonite', 'sphalerite', 'stibnite', 'titanite', 'topaz', 'tourmaline', 'vanadinite', 'vesuvianite', 'wulfenite', 'zircon']

function set_image_data() {
    let str = '';
    for (let j = 0; j < imagenet_labels.length; j++) {
      str += (j+1) + `: ${imagenet_labels[j]}`
      str += '<br>';
    }
    document.getElementById('mineral_list').innerHTML = str;
}



