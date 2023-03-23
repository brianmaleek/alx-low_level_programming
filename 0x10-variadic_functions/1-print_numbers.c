#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 *             if separator is NULL, don't print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (index < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
