#include <iostream>
#include <ctime>
#include <fstream>
// #include <vector>
// #include <opencv2/highgui.hpp>
// #include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

#include "match.h"

int main()
{
  time_t now = time(0);
  // start time of this executable program
  char* dateTime = ctime(&now); 

  system("mkdir logs");
  system("pwd > ./logs/pwd.log");
  std::string pwfFilePath = "./logs/pwd.log";
  std::ifstream pwdFile(pwfFilePath);
  std::ofstream logFile("./logs/run.log",std::ios::app);
  if (pwdFile.is_open() == false)
  {
    std::cout << "[ERROR] "
              << "cannot open file: " << pwfFilePath << std::endl;
    exit(0);
  }
  std::string string_temp;
  logFile<<dateTime;
  logFile<<"[pwd] ";

  while (getline(pwdFile, string_temp))
  {
    logFile << string_temp;
    logFile << std::endl;
  }

  // Main project start


  cv::Mat pkq = cv::imread("./img/pkq.jpg",1);
  std::cout << "[INFO] source image size: "<<pkq.size() << std::endl;
  logFile << "[INFO] source image size: "<<pkq.size() << std::endl;

  cv::Mat pkq_sub = pkq(cv::Range(100, 300), cv::Range(100, 300));
  std::cout << "[INFO] sub-image size: "<<pkq_sub.size() << std::endl;
  logFile << "[INFO] sub-image size: "<<pkq_sub.size() << std::endl;

  cv::imwrite("./img/pkq_sub.jpg", pkq_sub);

  ImageMatch imgMatch=ImageMatch(pkq);
  imgMatch.display_srcimg();

  logFile << std::endl;
  pwdFile.close();
  logFile.close();
  return 0;
}

