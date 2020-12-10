rm -rf build && mkdir build && cd build

cmake \
    -G "MinGW Makefiles" \
    ..
make

cd ..
cd bin

echo ""
echo ""
./project.exe