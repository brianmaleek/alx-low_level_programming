#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
