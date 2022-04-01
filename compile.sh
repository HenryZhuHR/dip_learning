rm -rf build
mkdir build 
cd build

source /Users/henryzhu/program/opencv-4.5.5/bin/setup_vars_opencv4.sh

cmake ..
make 
cd ../bin
# ./qt_demo