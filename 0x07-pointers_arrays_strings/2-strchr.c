#include "main.h"
#define NULL 0

/**
 * _strchr - function locates a character in a string.
 * @c: occurrence of the character in the string
 * @s: the string to be searched
 * Return: pointer to that character in the string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
