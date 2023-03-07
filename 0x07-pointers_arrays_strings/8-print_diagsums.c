#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum_1 += a[i];
	}
	for (i = 0; i < size; i++)
	{
		diagonal_sum_1 += *(a + (i * size) + i);
		/* add diagonal element from top left to bottom right*/
		diagonal_sum_2 += *(a + (i * size) + (size - 1 - i));
		/* add diagonal element from top right to bottom left*/
	}
	printf("Sum of diagonal 1: %d\n", diagonal_sum_1);
	printf("Sum of diagonal 2: %d\n", diagonal_sum_2);
}
