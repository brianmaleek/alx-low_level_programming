#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string ti get the length of
 * Return: length of str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
