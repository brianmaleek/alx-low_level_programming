#include "main.h"

/**
 * _strncat - function concatenates two strings
 * using at most n bytes from src
 * @dest: string to be appended upon.
 * @src: string to be appended to dest.
 * @n: number of bytes from src to be appended to dest.
 * Return: return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destlength = 0;

	while (dest[index++])
		destlength++;

	for (index = 0; src[index] && index < n; index++)
		dest[destlength++] = src[index];

	return (dest);
}
