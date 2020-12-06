rm -rf build

mkdir build
cd build

cmake -G "MinGW Makefiles" ..
make

cd ..

echo ""
echo ""
./project.exe