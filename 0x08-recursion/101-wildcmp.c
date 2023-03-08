#include "main.h"
#include <stdio.h>

/**
 * wildcmp_helper - recursively compares the two strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 1 if s is palindrome, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		/* Base case: both strings are empty, so they match */
		return (1);
	}
	else if (*s2 == '*')
	{
		/**
		 * Recursive case: try matching the rest of
		 * s2 with s1 or skip the current character
		 * in s1
		 */
		return (wildcmp_helper(s1, s2 + 1) ||
				(*s1 != '\0' && wildcmp_helper(s1 + 1, s2)));
	}
	else if (*s1 == *s2)
	{
		/**
		 * Recursive case: the current characters match
		 * so check the next one
		 */
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	else
	{
		/**
		 * Base case: the current characters don't
		 * match, so the strings don't match
		 */
		return (0);
	}
}

/**
 * wildcmp - check if the string could be considered identical
 * @s1: base address for string.
 * @s2: base address for string
 * Return: 1 if are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
