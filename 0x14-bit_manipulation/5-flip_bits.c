#include "main.h"

/**
 * flip_bits - function returns number of bits needed to be flipped
 *             to get from one number to another
 * @n: initial number
 * @m: number to flip n to
 * Return: number of bits to flip to get fron n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits_to_flip = n ^ m;
	unsigned int count = 0;

	while (num_bits_to_flip > 0)
	{
		if (num_bits_to_flip & 1)
			count++;
		num_bits_to_flip >>= 1;
	}
	return (count);
}
