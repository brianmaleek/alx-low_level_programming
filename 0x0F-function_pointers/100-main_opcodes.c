#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program
 * @ptr: address of the main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(unsigned char *ptr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", ptr[i]);
		if (i < n -  1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: on success, 1 or 2 in case of failure
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	int n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit (2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
