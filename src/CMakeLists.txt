SET(CMAKE_CXX_FLAGS "-std=c++11")

INCLUDE_DIRECTORIES(/usr/include)
INCLUDE_DIRECTORIES(/usr/local/include)
#INCLUDE_DIRECTORIES(/root/Downloads/mesos-0.22.1/src)




ADD_EXECUTABLE(mesos_test_framework test_framework.cpp)
TARGET_LINK_LIBRARIES(mesos_test_framework /usr/lib/libmesos.so /usr/local/lib/libglog.so)

ADD_EXECUTABLE(mesos_test_executor test_executor.cpp)
TARGET_LINK_LIBRARIES(mesos_test_executor /usr/lib/libmesos.so /usr/local/lib/libglog.so)
