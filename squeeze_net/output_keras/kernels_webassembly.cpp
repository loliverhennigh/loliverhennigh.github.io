
#include <stdlib.h>
#include <math.h>

float static_buffer[9095539];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {6737608,3744296,1,3,223,223,112,112,3,3,1,1,2,2,1,1};
int meta_buf_1[] = {3744296,0,1235496,12544,64,27};
int meta_buf_2[] = {1728,1235496,1235496,64,64,64,12544};
int meta_buf_3[] = {1235496,6140200,1,112,112,64,56,56,2,2,2,2,0,0};
int meta_buf_4[] = {6140200,1792,8536331,3136,16,64};
int meta_buf_5[] = {2816,8536331,8636683,16,16,16,3136};
int meta_buf_6[] = {8636683,2832,5939496,3136,64,16};
int meta_buf_7[] = {3856,5939496,5939496,64,64,64,3136};
int meta_buf_8[] = {8636683,2489896,1,16,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_9[] = {2489896,3920,6340904,3136,64,144};
int meta_buf_10[] = {13136,6340904,4534568,64,64,64,3136};
int meta_buf_11[] = {2941480,4,2,5939496,4534568,1,1,401408,7168,128,1,401408,7168,128,1,1,56,56,64,1,56,56,64,0,64};
int meta_buf_12[] = {2941480,13200,8235275,3136,16,128};
int meta_buf_13[] = {15248,8235275,8285451,16,16,16,3136};
int meta_buf_14[] = {8285451,15264,4935976,3136,64,16};
int meta_buf_15[] = {16288,4935976,5136680,64,64,64,3136};
int meta_buf_16[] = {8285451,2038312,1,16,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_17[] = {2038312,16352,5337384,3136,64,144};
int meta_buf_18[] = {25568,5337384,5538088,64,64,64,3136};
int meta_buf_19[] = {3342888,4,2,5136680,5538088,1,1,401408,7168,128,1,401408,7168,128,1,1,56,56,64,1,56,56,64,0,64};
int meta_buf_20[] = {3342888,7513995,1,56,56,128,28,28,2,2,2,2,0,0};
int meta_buf_21[] = {7513995,25632,9000459,784,32,128};
int meta_buf_22[] = {29728,9000459,9025547,32,32,32,784};
int meta_buf_23[] = {9025547,29760,7815051,784,128,32};
int meta_buf_24[] = {33856,7815051,7815051,128,128,128,784};
int meta_buf_25[] = {9025547,4308776,1,32,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_26[] = {4308776,33984,7614347,784,128,288};
int meta_buf_27[] = {70848,7614347,7614347,128,128,128,784};
int meta_buf_28[] = {4735272,4,2,7815051,7614347,1,1,200704,7168,256,1,200704,7168,256,1,1,28,28,128,1,28,28,128,0,128};
int meta_buf_29[] = {4735272,70976,8975371,784,32,256};
int meta_buf_30[] = {79168,8975371,8975371,32,32,32,784};
int meta_buf_31[] = {8975371,79200,7112587,784,128,32};
int meta_buf_32[] = {83296,7112587,7112587,128,128,128,784};
int meta_buf_33[] = {8975371,4082984,1,32,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_34[] = {4082984,83424,7313291,784,128,288};
int meta_buf_35[] = {120288,7313291,7413643,128,128,128,784};
int meta_buf_36[] = {5738792,4,2,7112587,7413643,1,1,200704,7168,256,1,200704,7168,256,1,1,28,28,128,1,28,28,128,0,128};
int meta_buf_37[] = {5738792,8486155,1,28,28,256,14,14,2,2,2,2,0,0};
int meta_buf_38[] = {8486155,120416,9085131,196,48,256};
int meta_buf_39[] = {132704,9085131,9085131,48,48,48,196};
int meta_buf_40[] = {9085131,132752,8900107,196,192,48};
int meta_buf_41[] = {141968,8900107,8937739,192,192,192,196};
int meta_buf_42[] = {9085131,8000075,1,48,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_43[] = {8000075,142160,8862475,196,192,432};
int meta_buf_44[] = {225104,8862475,8862475,192,192,192,196};
int meta_buf_45[] = {8084747,4,2,8937739,8862475,1,1,75264,5376,384,1,75264,5376,384,1,1,14,14,192,1,14,14,192,0,192};
int meta_buf_46[] = {8084747,225296,9075723,196,48,384};
int meta_buf_47[] = {243728,9075723,9075723,48,48,48,196};
int meta_buf_48[] = {9075723,243776,8787211,196,192,48};
int meta_buf_49[] = {252992,8787211,8787211,192,192,192,196};
int meta_buf_50[] = {9075723,7915403,1,48,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_51[] = {7915403,253184,8824843,196,192,432};
int meta_buf_52[] = {336128,8824843,8824843,192,192,192,196};
int meta_buf_53[] = {8160011,4,2,8787211,8824843,1,1,75264,5376,384,1,75264,5376,384,1,1,14,14,192,1,14,14,192,0,192};
int meta_buf_54[] = {8160011,336320,9050635,196,64,384};
int meta_buf_55[] = {360896,9050635,9050635,64,64,64,196};
int meta_buf_56[] = {9050635,360960,8435979,196,256,64};
int meta_buf_57[] = {377344,8435979,8435979,256,256,256,196};
int meta_buf_58[] = {9050635,6999691,1,64,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_59[] = {6999691,377600,8586507,196,256,576};
int meta_buf_60[] = {525056,8586507,8686859,256,256,256,196};
int meta_buf_61[] = {7714699,4,2,8435979,8686859,1,1,100352,7168,512,1,100352,7168,512,1,1,14,14,256,1,14,14,256,0,256};
int meta_buf_62[] = {7714699,525312,9063179,196,64,512};
int meta_buf_63[] = {558080,9063179,9063179,64,64,64,196};
int meta_buf_64[] = {9063179,558144,8737035,196,256,64};
int meta_buf_65[] = {574528,8737035,8737035,256,256,256,196};
int meta_buf_66[] = {9063179,6886795,1,64,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_67[] = {6886795,574784,8335627,196,256,576};
int meta_buf_68[] = {722240,8335627,8385803,256,256,256,196};
int meta_buf_69[] = {7212939,4,2,8737035,8385803,1,1,100352,7168,512,1,100352,7168,512,1,1,14,14,256,1,14,14,256,0,256};
int meta_buf_70[] = {7212939,722496,6541608,196,1000,512};
int meta_buf_71[] = {1234496,6541608,6541608,1000,1000,1000,196};
int meta_buf_72[] = {6541608,9094539,1,14,14,1000,1,1,14,14,14,14,0,0};
int meta_buf_73[] = {9094539,9094539,1,1000};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73};

extern "C" void init() {
    //static_buffer = (float*)malloc(9095539 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;

        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::ColMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int v4 = meta_buffer[3];
    const int v5 = meta_buffer[4];
    const int D0 = meta_buffer[5];
    const int D1 = meta_buffer[6];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v6 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v7 = v2[d0 + d1*v4];
            float v8;
            {
                v8 = v7 + v6;
            }
            float v9;
            {
                v9 = v8 > 0 ? v8 : 0;
            }
            v3[d0 + d1*v5] = v9;
        }
    }
}


void maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(const int * meta_buffer)
{
    float *y = (static_buffer + meta_buffer[0]);
    const int N = meta_buffer[2];
    const int D = meta_buffer[1];
    const int *y_offsets = (&(meta_buffer[23]));
    const int *x_shapes = (&(meta_buffer[15]));
    const int *x_strides_in_y = (&(meta_buffer[7]));

    int x_index = 0;

    for (int n = 0; n < N; n++) {
        const float *x = (meta_buffer[3+2+(n)]?static_buffer:dynamic_buffer) + meta_buffer[3 + (n)];
        const int y_offset = y_offsets[n];
        const int *x_shape = x_shapes + n * D;
        const int *x_stride_in_y = x_strides_in_y + n * D;

        int x_size = 1;
        for (int d = 0; d < D; d++) {
            x_size *= x_shape[d];
        }

        while (x_index < x_size) {
            int y_index = y_offset;
            int s = x_index;
            for (int d = D-1; d >= 0; d--) {
                y_index += x_stride_in_y[d] * (s % x_shape[d]);
                s /= x_shape[d];
            }

            y[y_index] = x[x_index];

            x_index++;
        }

        x_index -= x_size;
    }
}


void elementwiseadd_2b50fc92cd4fd19f86f0b848dcf82aad36e4cb2719773776962a15c5(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int v4 = meta_buffer[3];
    const int v5 = meta_buffer[4];
    const int D0 = meta_buffer[5];
    const int D1 = meta_buffer[6];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v6 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v7 = v2[d0 + d1*v4];
            float v8;
            {
                v8 = v7 + v6;
            }
            v3[d0 + d1*v5] = v8;
        }
    }
}


void averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];

    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
                
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int C = meta_buffer[3];

    for (int n = 0; n < N; n++) {
        float set_max = X[n * C];
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            if (val > set_max) {
                set_max = val;
            }
        }

        float sum_exp = 0.0F;
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            float exp_x = expf(val - set_max);
            sum_exp += exp_x;
            Y[n * C + c] = exp_x;
        }

        for (int c = 0; c < C; c++) {
            Y[n * C + c] /= sum_exp;
        }
    }
}

extern "C" void run() {
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_0);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_1);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_2);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_3);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_4);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_5);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_6);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_7);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_8);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_9);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_10);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_11);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_12);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_13);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_14);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_15);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_16);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_17);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_18);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_19);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_20);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_21);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_22);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_23);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_24);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_25);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_26);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_27);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_28);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_29);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_30);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_31);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_32);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_33);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_34);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_35);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_36);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_37);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_38);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_39);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_40);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_41);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_42);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_43);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_44);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_45);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_46);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_47);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_48);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_49);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_50);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_51);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_52);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_53);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_54);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_55);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_56);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_57);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_58);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_59);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_60);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_61);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_62);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_63);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_64);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_65);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_66);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_67);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_68);
concat_9dc48661f18df861021d8647f2b13b42a014c55639541640b11390e0(meta_buf_69);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_70);
elementwiseadd_2b50fc92cd4fd19f86f0b848dcf82aad36e4cb2719773776962a15c5(meta_buf_71);
averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(meta_buf_72);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_73);

}

