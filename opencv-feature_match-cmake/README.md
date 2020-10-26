## 2020.10.16

> 更新文件：
- 添加运行文件日志：[./logs/run.log](./logs/run.log)
- 添加[./include/match.h](./include/match.h)、[./src/match.cpp](./src/match.cpp)，开始构建图像匹配类`ImageMatch`

> 参考文献：
- [OpenCV探索之路（二十三）：特征检测和特征匹配方法汇总](https://www.cnblogs.com/skyfsm/p/7401523.html)

> 调试记录：
- 自定义类需要调用opencv的时候，在头文件所在目录下的[CMakeLsits.txt](include/CMakeLists.txt)和源文件所在目录下的[CMakeList.txt](src/CMakeLists.txt)中都要导入opencv：
    ```{txt}
    find_package( OpenCV 4 REQUIRED )
    include_directories( ${OpenCV_INCLUDE_DIRS} )
    ```
    
> 知识点
- 特征匹配的尺度不变特征：不仅在任何尺度下拍摄的物体都能检测到一致的关键点，而且每个被检测的特征点都对应一个尺度因子。理想情况下，对于两幅图像中不同尺度的的同一个物体点， 计算得到的两个尺度因子之间的比率应该等于图像尺度的比率。其中SURF特征（加速稳健特征，Speeded Up Robust Feature）不仅是尺度不变特征，而且是具有较高计算效率的特征。