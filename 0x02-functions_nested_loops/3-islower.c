#include "main.h"

/**
 * _islower - function checks for lowercase character
 * @c: character to checked
 * Return: 1 if lower case, 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
