rm -rf build
echo "deletr build"


mkdir build
cd build
echo "create build, change dir to build"

cmake -G "MinGW Makefiles" ..
make

cd ..

echo ""
echo ""
./project.exe \
    ./image/lena.jpg