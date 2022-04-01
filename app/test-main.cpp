#include <iostream>
#include <vector>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

// #include "MyClass.h"


int main(int argc, char **argv)
{
  std::cout << "[INFO] compile finished" << std::endl;

  if (argc != 2)
  {
    printf("usage: DisplayImage.out <Image_Path>\n");
    return -1;
  }

  cv::Mat image = cv::imread(argv[1], 1);

  if (!image.data)
  {
    printf("No image data \n");
    return -1;
  }
  cv::namedWindow("Display Image", cv::WindowFlags::WINDOW_AUTOSIZE);
  cv::imshow("Display Image", image);
  cv::waitKey(0);

  return 0;
}