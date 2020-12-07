#include <iostream>
#include <vector>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

#include "MyClass.h"

template <typename T>
void print_vector(std::vector<T> vec)
{

  std::cout << "size: " << vec.size() << "  capacity: " << vec.capacity() << "\t\t";
  for (unsigned int i = 0; i < vec.size(); i++)
    std::cout << vec.at(i) << "  ";
  std::cout << std::endl;
}

int main(int argc, char **argv)
{
  std::vector<int> vec;
  std::vector<int>::iterator pos, pos_1;

  for (int i = 0; i < 10; i++)
    vec.push_back(i);
  print_vector(vec);

  vec.pop_back();
  print_vector(vec);

  vec.at(4) = 0;
  print_vector(vec);

  // -- iterator --
  for (pos = vec.begin(); pos != vec.end(); pos++)
    std::cout << *pos << "  ";
  std::cout << std::endl;

  pos = vec.begin();
  pos+=2;
  pos_1 = vec.insert(pos, 8);
  print_vector(vec);

  pos_1=vec.erase(pos);
  print_vector(vec);


  return 0;
}
