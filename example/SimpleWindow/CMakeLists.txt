cmake_minimum_required(VERSION 3.28)
project(SimpleWindow VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)

FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG master
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM
)
FetchContent_MakeAvailable(SFML)

FetchContent_Declare(Mory
        GIT_REPOSITORY http://github.com/Intemporel/Mory.git
        GIT_TAG main
)
FetchContent_MakeAvailable(Mory)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics Mory::UserInterface)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)