cmake_minimum_required(VERSION 3.10) # 指定CMake的最低版本要求
project(2048) # 指定项目的名称

# 添加头文件搜索路径
include_directories(include)

# 创建一个空的SOURCES变量
set(SOURCES "")

# 添加所有的.cpp文件到SOURCES变量
file(GLOB_RECURSE TEMP_SOURCES "src/*.cpp")
list(APPEND SOURCES ${TEMP_SOURCES})

add_library(2048_lib ${SOURCES})

# 添加所有的源文件到一个名为2048的可执行文件
add_executable(2048 "main.cpp")
set_target_properties(2048 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
target_link_libraries(2048 2048_lib)