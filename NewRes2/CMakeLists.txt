cmake_minimum_required(VERSION 3.10)
project(proj1 VERSION 0.1.0 LANGUAGES C CXX)

# Включение поддержки тестирования
include(CTest)
enable_testing()

# Добавление исполняемого файла
add_executable(proj1 mainic.cpp)

# Настройка переменных CPACK
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)