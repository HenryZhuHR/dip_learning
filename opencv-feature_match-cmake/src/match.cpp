#include "match.h"

ImageMatch::ImageMatch(/* args */)
{
}
ImageMatch::ImageMatch(cv::Mat srcImg)
{
    this->srcImg = srcImg;
    std::cout << "init srcimg" << std::endl;
}

ImageMatch::~ImageMatch()
{
}

// display
cv::Mat AdaptiveImg(cv::Mat src)
{
    int srcWidth = src.size().width;
    int srcHeight = src.size().height;

    int newHeight = 300;
    int newWidth = static_cast<int>(newHeight * srcWidth / srcHeight);
    cv::Size size = cv::Size(newWidth, newHeight);

    cv::Mat adaptiveImg;
    cv::resize(src, adaptiveImg, size);
    return adaptiveImg;
}
void ImageMatch::display_srcimg()
{
    cv::imshow("src img", AdaptiveImg(this->srcImg));
    cv::waitKey(5000);
}