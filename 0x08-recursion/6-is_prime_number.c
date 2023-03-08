#include "main.h"

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	int i;
	/**
	 * Check for special cases
	 * 0 and 1 are not prime numbers
	 */
	if (n <= 1)
	{
		return (0);
	}
	/**
	 * Check if n is divisible by any integer from 2 to n - 1
	 */
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			/*
			 * n is divisible by i, so it is not a prime number
			 */
			return (0);
		}
	}
	return (1);
	/*
	 * n is not divisible by any integer from 2 to n - 1, so it is
	 * a prime number
	 */
}
