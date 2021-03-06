# 模板匹配
- [模板匹配](#模板匹配)
- [模板匹配定义](#模板匹配定义)
- [模板匹配算法](#模板匹配算法)
  - [平方差匹配法 `CV_TM_SQDIFF`](#平方差匹配法-cv_tm_sqdiff)

# 模板匹配定义
opencv官网对模板匹配的解释是：

> 模板匹配是一种用于在较大图像中搜索和查找模板图像位置的方法。  
> 
> 为此，OpenCV带有一个函数`cv2.matchTemplate()`。它只是将模板图​​像滑动到输入图像上（就像在2D卷积中一样），然后在模板图像下比较模板和输入图像的补丁。  
> OpenCV中实现了几种比较方法。它返回一个灰度图像，其中每个像素表示该像素的邻域与模板匹配多少。
> 
> 如果输入图像的大小 ($W \times H$) 和模板图像的大小 ($w \times h$) ，则输出图像的大小将为`(W-w + 1，H-h + 1)`。获得结果后，可以使用`cv2.minMaxLoc()`函数查找最大/最小值在哪里。将其作为矩形的左上角，并以`(w，h)`作为矩形的宽度和高度。该矩形是您模板的区域。

可以理解为
> 模板图像在待匹配的图像上`由左至右、由上至下`的滑动，每移动一次，就会以这个像素点为左上角顶点从源图像中截取出与模板一样大小的图像与模板进行像素比较运算

# 模板匹配算法

## 平方差匹配法 `CV_TM_SQDIFF`