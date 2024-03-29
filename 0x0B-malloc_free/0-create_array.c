#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars and assign char c
 * @size: size of array
 * @c: assign array with this char
 * Description: create array of size, size and assign char c
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size <= 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
