#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index to set the value. Index starts from 0 of the bit to be set
 * Return: 1 if successful or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask = 1ul << index;
	*n &= ~mask;
	return (1);
}
