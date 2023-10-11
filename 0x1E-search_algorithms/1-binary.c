#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 *           Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i,
	left = 0,
	right = size - 1;
	int mid;

	if (array == NULL)
		/* Return -1 if array is NULL */
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
		/* Return the index of the value */
			return (mid);
	}
	/* Return -1 if the value is no found in the array */
	return (-1);
}
