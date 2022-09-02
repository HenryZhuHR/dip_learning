#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/ximgproc/edge_filter.hpp>

#ifdef MYSYMBOL
#define USE_MYMATH_FLAGS 1
#else
#define USE_MYMATH_FLAGS 0
#endif


int main(int argc, char const *argv[])
{
    auto model=cv::dnn::readNetFromONNX("../assets/yolov5s.onnx");
    // cv::ximgproc::guidedFilter()
    return 0;
}
