//
// Created by Tom on 17.11.2023.
//

#ifndef HUFFMAN_IO_H
#define HUFFMAN_IO_H
#include <stdbool.h>
#include "huffman_common.h"

void init_in(char text[]);
void init_out();
void get_out_buffer(char text[]);

//Byteweise lesen und schreiben
bool has_next_char(void);
unsigned char read_char(void);
void write_char(unsigned char c);

//Bitweise lesen und schreiben
bool has_next_bit(void);
enum BIT read_bit(void);
void write_bit(enum BIT c);

#endif //HUFFMAN_IO_H
