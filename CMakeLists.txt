cmake_minimum_required(VERSION 3.28)

project(templ_modules)

set(CMAKE_CXX_STANDARD 20)

add_executable(templ)
target_sources(templ
    PUBLIC
    "src/main.cpp"
)

target_sources(templ
  PUBLIC
    FILE_SET modules TYPE CXX_MODULES FILES
        "src/templ.cppm"
)