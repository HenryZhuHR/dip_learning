#ifndef __MATCH_H__
#define __MATCH_H__

#include <iostream>
#include <string>
#include <vector>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

class Match
{
private:
    /* data */
    cv::Mat srcImage;

public:
    Match(/* args */);
    Match(std::string pathToIamge);
    ~Match();

public:
    cv::Mat SURF(cv::Mat src);
};

#endif