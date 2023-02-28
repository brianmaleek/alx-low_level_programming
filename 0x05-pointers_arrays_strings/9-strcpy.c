#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - this fuction copy the pointer to variable.
 * @src: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * Return: a character value.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
