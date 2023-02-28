#include "main.h"

/**
 * _strcpy - this fuction copy the pointer to variable.
 * @src: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
