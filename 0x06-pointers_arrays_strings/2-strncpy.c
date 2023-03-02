#include "main.h"

/**
 * _strncpy - Copies a string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
