# DIP_Learing
learning of Digital Image Processing 


https://www.hahack.com/codes/cmake/


编译库
https://www.cnblogs.com/zhoug2020/p/5904206.html


# 导航
- [DIP_Learing](#dip_learing)
- [导航](#导航)
- [工程结构](#工程结构)


# 工程结构
```bash
$ tree
.  
|-- CMakeLists.txt
|-- README.md
|-- app
|   |-- CMakeLists.txt
|   |-- main.cpp      
|-- bin
|-- build
|-- compile.sh
|-- image
`-- src
    |-- CMakeLists.txt
    |-- MyClass.cpp
    |-- Solution
    |   |-- CMakeLists.txt
    |   `-- Solution.cpp
    `-- include
        |-- MyClass.h
        `-- Solution
            `-- Solution.h
```
- src : `源文件`存放
- app : `main.cpp` 文件
- bin : 输出的`可执行文件`和`动态链接库`
- build : CMake 编译文件
- image : 图片文件