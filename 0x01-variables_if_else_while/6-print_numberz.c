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
	int number;
	/*print numbers base of 10 starting from 0*/
	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');
	return (0);
}
