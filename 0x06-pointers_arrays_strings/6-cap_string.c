#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @str: string to manipulate
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i -
				1] == '\n' || str[i - 1] == ',' || str[i - 1] ==
				';' || str[i - 1] == '.' || str[i - 1] == '!' ||
				str[i - 1] == '?' || str[i - 1] == '"' || str[i
				- 1] == '(' || str[i - 1] == ')' || str[i - 1]
				== '{' || str[i - 1] == '}') {
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
