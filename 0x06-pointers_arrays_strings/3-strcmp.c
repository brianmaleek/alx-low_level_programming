#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] == s2[index])
	{
		if (s1[index] == '\0')
			return (s1[index] - s2[index]);
		index++
	}
	return (s1[index] - s2[index]);
}
