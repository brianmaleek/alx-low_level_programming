#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	duplicate_str = malloc(sizeof(char) * (i + 1));

	if (duplicate_str == NULL)
		return (NULL);
	for (; str[len]; len++)
	{
		duplicate_str[len] = str[len];
	}
	return (duplicate_str);
}
