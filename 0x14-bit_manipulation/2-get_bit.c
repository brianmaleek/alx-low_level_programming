#include "main.h"

/**
 * get_bit - function returns value of a bit at a given index
 * @n: the bit
 * @index:  index to get the value of bit
 * Return: if an error occurs -1
 *          otherwise value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	/**
	 * mask has a 1 in the position corresponding to the
	 * input index
	 */

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1ul << index;
	return ((n & mask) ? 1 : 0);
}
