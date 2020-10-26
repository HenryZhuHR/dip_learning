#ifndef _MATCH_H_
#define _MATCH_H_

#include <opencv2/opencv.hpp>

class ImageMatch
{
private:
    cv::Mat srcImg; // source image
public:
    ImageMatch(/* args */);
    ImageMatch(cv::Mat srcImg);
    ~ImageMatch();
public:
    void display_srcimg();
};

#endif