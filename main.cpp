#include <iostream>
using namespace std;
#include <vector>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

#include "MyClass.h"

int main() {
  std::cout<<"[INFO] compile finished"<<std::endl;
  

  MyClass my_class_a=MyClass();

  cv::Mat img_lena=cv::imread("./image/lena.jpg");
  cv::imshow("lena.jpg",img_lena);
  cv::waitKey(0); 

  
  return 0;
}
