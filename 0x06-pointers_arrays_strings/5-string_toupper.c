#include "main.h"

/**
 * string_toupper - capitalize all letters in string
 * @str: string to manipulate
 * Return: string with all letters capitalized
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 'a' + 'A';
		}
		index++;
	}
	return (str);
}

