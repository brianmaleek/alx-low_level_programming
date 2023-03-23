#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg;
	int int_arg;
	float float_arg;
	unsigned int index = 0;
	char format_char;

	va_start(args, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				format_char = va_arg(args, int), printf("%c", format_char);
				break;
			case 'i':
				int_arg = va_arg(args, int), printf("%d", int_arg);
				break;
			case 'f':
				float_arg = (float) va_arg(args, double), printf("%f", float_arg);
				break;
			case 's':
				str_arg = va_arg(args, char *),
					printf("%s", str_arg != NULL ? str_arg : "(nil)");
				break;
			default:
				index++;
				continue;
		}
		if (format[index + 1] != '\0')
		{
			char *sep = ", ";

			printf("%s", sep);
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
