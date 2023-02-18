#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/*print lowercase letters*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/*print uppercase letters*/
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
