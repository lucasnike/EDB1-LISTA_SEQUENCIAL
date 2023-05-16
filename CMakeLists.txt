cmake_minimum_required(VERSION 3.16)
project(teste VERSION 0.1 LANGUAGES CXX )

include_directories( include )


add_executable( program 
src/Main.cpp 
src/Lista.cpp
)