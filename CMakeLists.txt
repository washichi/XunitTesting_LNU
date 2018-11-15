cmake_minimum_required(VERSION 2.6)

#Turn on C++11 Support
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

set(files
    playlist.hpp
    playlist.cpp
    mood.hpp
    song.hpp
    song.cpp
    )
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests testMain.cpp playlist_test.cpp)
# target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)
target_link_libraries(executeTests gmock_main)

