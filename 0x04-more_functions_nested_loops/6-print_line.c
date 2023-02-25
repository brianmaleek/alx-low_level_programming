#include "main.h"

/**
 * print_line - Draws a straight lie using the character '_'
 * @n: The number of '_' character to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
