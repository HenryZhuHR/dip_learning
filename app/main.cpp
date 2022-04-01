#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>

#ifdef MYSYMBOL
#define USE_MYMATH_FLAGS 1
#else
#define USE_MYMATH_FLAGS 0
#endif


int main(int argc, char const *argv[])
{
    cv::dnn::readNetFromONNX("../a.onnx");
    cv::imread("../a.jpg");
    return 0;
}
