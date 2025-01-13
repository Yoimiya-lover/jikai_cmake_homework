#确定最小cmake版本
cmake_minimum_required(VERSION 3.20)

#项目名称
project(homework)

#关闭扩展
set(CMAKE_CXX_EXTENSIONS OFF)

#查找opencv库
find_package(OpenCV REQUIRED)

#指定子模块
add_subdirectory(thirdparty)
add_subdirectory(editor)
add_subdirectory(sample)