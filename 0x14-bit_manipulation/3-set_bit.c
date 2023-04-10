#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: index to set the value at. Index starts from 0.
 * Return: i if successful or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask = 1ul << index;
	*n |= mask;
	return (1);
}
