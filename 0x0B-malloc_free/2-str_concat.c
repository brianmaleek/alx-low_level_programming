#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		len1++, i++;
	while (s2[j])
		len2++, j++;

	len = len1 + len2;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (; i < len1; i++)
		concat[i] = s1[i];

	for (; j < len2; j++, i++)
		concat[i] = s2[j];
	concat[len] = '\0';

	return (concat);
}
