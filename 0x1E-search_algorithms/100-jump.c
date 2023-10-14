#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the
 *               Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int step;
	int prev = 0;
	int current = 0;
	int i = 0;

	if (array == NULL || size == 0)
	{
		return (-1); /* Return -1 if the array is NULL or empty */
	}

	step = (int)sqrt((double)size);

	while (current < (int)size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (i = prev; i <= current && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i); /* Return the index of the value */
		}
	}

	return (-1); /* Return -1 if the value is not found in the array */
}
