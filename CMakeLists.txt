cmake_minimum_required(VERSION 3.10)
project(MyProject)

add_executable(main_exec Main.cpp OS2.cpp)
set(CMAKE_TOOLCHAIN_FILE "C:/Apps/vcpkg/scripts/buildsystems/vcpkg.cmake")
enable_testing()
add_executable(test_main tests.cpp OS2.cpp)
target_link_libraries(test_main gtest gtest_main pthread)
add_test(NAME MyTests COMMAND test_main)