#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/features2d/features2d.hpp>
// using namespace cv;

#include "MyClass.h"

int main(int argc, char **argv)
{
  unique_ptr<int> uptr_i;   //创建空智能指针
  uptr_i.reset(new int(3)); //绑定动态对象

  cout << *uptr_i;

  cv::Mat img_src = cv::imread("./image/pikachu.jpg", 1);
  cv::Mat img_sub = cv::imread("./image/pikachu-sub.jpg", 1);
  cv::namedWindow("src", 0);
  cv::namedWindow("sub", 0);
  cv::imshow("src", img_src);
  cv::imshow("sub", img_sub);
  cv::waitKey(1000);

  cv::Mat img_gray_src;
  cv::Mat img_gray_sub;
  cv::cvtColor(img_src, img_gray_src, cv::COLOR_BGR2GRAY);
  cv::cvtColor(img_sub, img_gray_sub, cv::COLOR_BGR2GRAY);
  cv::imshow("src", img_gray_src);
  cv::imshow("sub", img_gray_sub);
  cv::waitKey(1000);

  std::vector<cv::KeyPoint> keypoint1, keypoint2;
  cv::Mat descriptor1, descriptor2;
  cv::Ptr<cv::ORB> orb = cv::ORB::create();

  orb->detect(img_src, keypoint1);
  orb->detect(img_sub, keypoint2);

  orb->compute(img_src, keypoint1, descriptor1);
  orb->compute(img_sub, keypoint2, descriptor2);

  std::vector<cv::DMatch> matches;
  cv::BFMatcher bfMatcher(cv::NORM_HAMMING);
  bfMatcher.match(descriptor1, descriptor2, matches);

  
  return 0;
}
