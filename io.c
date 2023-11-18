//
// Created by Tom on 18.11.2023.
//

#include "io.h"

#define GET_BIT(BYTE, POS) //private
#define PUT_BIT(BYTE, BIT, POS) //private

void init_in(char text[])
{

}

void init_out()
{

}

void get_out_buffer(char text[])
{

}

//Byteweise lesen und schreiben
bool has_next_char(void)
{
	return false;
}

unsigned char read_char(void)
{
	return 'a';
}

void write_char(unsigned char c)
{

}

//Bitweise lesen und schreiben
bool has_next_bit(void)
{
	return false;
}

enum BIT read_bit(void)
{
	return has_next_bit() == false ? ZERO : ONE;
}

void write_bit(enum BIT c)
{

}