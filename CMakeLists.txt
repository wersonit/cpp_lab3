cmake_minimum_required(VERSION 3.14)

# Укажите имя проекта
project(lab2)

# Укажите стандарт C++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем поддержку FetchContent
include(FetchContent)

# Загрузка Google Test
FetchContent_Declare(
    gtest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2  # Укажите нужную версию
)

# Загрузка Google Test
FetchContent_MakeAvailable(gtest)

# Укажите исходные файлы вашего проекта
set(SOURCE_FILES
    appp1.cpp  # Замените на название вашего файла с кодом
)

# Создаем исполняемый файл
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Линкуем Google Test с вашим проектом
target_link_libraries(${PROJECT_NAME} gtest gtest_main)

# Установите тесты, если они есть
enable_testing()
add_test(NAME SecondDerivativeTest COMMAND ${PROJECT_NAME})