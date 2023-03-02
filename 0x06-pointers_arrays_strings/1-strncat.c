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
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlength++;
	for (i = 0; src[i] != '\0'; i++)
		srclength++;
	for (i = 0; i < n; i++)
		dest[destlength + i] = src[i];
	return (dest);
}
