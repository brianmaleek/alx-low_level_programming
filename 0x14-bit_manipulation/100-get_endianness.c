#include "main.h"

/**
 * get_endianness - function checks for endianness
 * Return: 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_pointer = (char *) &num;

	if (*byte_pointer)
		return (1);

	else
		return (0);
}
