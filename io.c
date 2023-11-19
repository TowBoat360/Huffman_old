//
// Created by Tom on 18.11.2023.
//

#include "io.h"
#include <string.h>

/**
 * Größe des Engabe-/Ausgabepuffers
 */
#define BUF_SIZE 4096

/**
 * Gibt den Bit an der jeweiligen Stelle
 *
 * @param BYTE ist der Byte aus dem ein Bit extrahiert werden soll
 * @param POS gibt die Stelle des Bits an, der extrahiert werden soll
 */
#define GET_BIT(BYTE, POS) ((Byte) & (0x01 << (7 - POS)))//private

/**
 * @param BYTE
 * @param BIT
 * @param POS
 */
#define PUT_BIT(BYTE, BIT, POS) ()//private

/*
 * Eingabepuffer
 */
static unsigned char in_buffer[BUF_SIZE];

/*
 * Ausgabepuffer
 */
static unsigned char out_buffer[BUF_SIZE];

static int pos_in;
static int fill_in;

static int pos_out;
static int fill_out;

void init_in(char text[])
{
	int text_length;
	int i;

	memset(in_buffer, 0, BUF_SIZE);

	text_length = (int) strlen(text);
	fill_in = text_length;
	pos_in = 0;

	for (i = 0; i < text_length; i++)
	{
		in_buffer[i] = text[i];
	}
	in_buffer[i] = '\0';
}

void init_out()
{
	memset(out_buffer, 0, BUF_SIZE);

	fill_out = 0;
	pos_out = 0;
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

BIT read_bit(void)
{
	return has_next_bit() == false ? ZERO : ONE;
}

void write_bit(BIT c)
{

}