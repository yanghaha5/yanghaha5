cmake_minimum_required(VERSION 3.5)
project(opencv_test)

find_package(OpenCV REQUIRED)


## ${OpenCV_DIR}             #/usr/lib/x86_64-linux-gnu/cmake/opencv4
#  ${OpenCV_INCLUDE_DIRS}    #/usr/include/opencv4 #头文件目录
#  ${OpenCV_LIBRARIES}   ${OpenCV_LIBS} 同样都是libs  # /usr/lib/x86_64-linux-gnu/
#  g++  main.cpp `pkg-config --cflags --libs opencv4`                     
include_directories(${OpenCV_INCLUDE_DIRS} .)

set(CMAKE_INSTALL_PREFIX "/workspaces/yanghaha5")
message(${CMAKE_INSTALL_PREFIX})

add_executable(main main.cpp)
target_link_libraries(main ${OpenCV_LIBS})


install(TARGETS  main
    DESTINATION /workspaces/yanghaha5/lib
)