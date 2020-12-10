rm -rf build
mkdir build
rm -rf bin
mkdir bin
cd build

cmake \
    -G "MinGW Makefiles" \
    ..
make

cd ../bin

echo ""

./project.exe