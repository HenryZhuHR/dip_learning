rm -rf build
mkdir build
rm -rf bin
mkdir bin
cd build

cmake ..
make

cd ../bin
# rm *.a

echo ""

# ./project