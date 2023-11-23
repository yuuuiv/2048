cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(2048Game)

# 添加头文件搜索路径
include_directories(include)

# 查找src目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(src DIR_LIB_SRCS)

# 添加库
add_library(2048 ${DIR_LIB_SRCS})

# 添加可执行文件
add_executable(2048Game main.cpp)

# 链接库到你的可执行文件
target_link_libraries(2048Game 2048)
target_link_libraries(2048Game 2048 stdc++)