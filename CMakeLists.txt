cmake_minimum_required(VERSION 3.26)
project(Huffman C)

set(CMAKE_C_STANDARD 11)

add_executable(Huffman main.c
        huffman.h
        huffman_common.h
        io.h
        huffman.c
        io.c
)
