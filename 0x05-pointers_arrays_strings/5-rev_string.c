#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int lencount = 0;
	int i;

	while (s[lencount] != '\0')
		lencount++;
	for (i = 0; i < lencount; i++)
	{
		lencount--;
		rev = s[i];
		s[i] = s[lencount];
		s[lencount] = rev;
	}
}
