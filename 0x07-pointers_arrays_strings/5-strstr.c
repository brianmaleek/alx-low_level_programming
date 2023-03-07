#include "main.h"
#define NULL 0

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;
	char *start;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		start = haystack;
		p1 = haystack;
		p2 = needle;
		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (start);
		}
		haystack++;
	}
	return (NULL);
}

