#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: first parameter to add
 *Return: 0 if n is null or sum of
 *         parameters in other case
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, index;
	va_list args;

	/* validate valist and initialize */
	if (n == 0)
		return (0);

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
