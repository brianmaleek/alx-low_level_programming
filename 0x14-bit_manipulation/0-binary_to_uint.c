#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: return 0 - if b is NULL or contains chars not 0 or 1
 *         otherwise - return converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (num = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			num = num << 1;
		}
		else if (*b == '1')
		{
			num = (num << 1);
			num++;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
