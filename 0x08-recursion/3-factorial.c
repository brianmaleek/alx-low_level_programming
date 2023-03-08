#include "main.h"

/**
 * factorial - find factorial of n
 * @n: number
 * Return: factorial of number, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		/*error: n is negative*/
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		/*base case: factorial of 0 is 1*/
		return (1);
	}
	else
	{
		/*recursive case*/
		return (n * factorial(n - 1));
	}
}
