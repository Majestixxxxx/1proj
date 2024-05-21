cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
# Название проекта
project(MyProject)
# Установка стандарта C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(MyExecutable main.cpp)