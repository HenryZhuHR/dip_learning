#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;

#include "MyClass.h"

int main(int argc, char **argv)
{
  unique_ptr<int> uptr_i;   //创建空智能指针
  uptr_i.reset(new int(3)); //绑定动态对象

  cout << *uptr_i;

  return 0;
}
