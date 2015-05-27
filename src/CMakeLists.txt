SET(CMAKE_CXX_FLAGS "-std=c++11")

INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(/usr/local/include)
#INCLUDE_DIRECTORIES(/root/Downloads/mesos-0.22.1/src)

add_executable(main main.cpp)
TARGET_LINK_LIBRARIES(main libmesos_test_framework.so /usr/lib/libmesos-0.22.1.so /usr/local/lib/libglog.so)

