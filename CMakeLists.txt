cmake_minimum_required(VERSION 3.26)
project(Huffman C)

set(CMAKE_C_STANDARD 11)

add_executable(Huffman source/main.c
        headers/huffman.h
        headers/huffman_common.h
        headers/io.h
        source/huffman.c
)
