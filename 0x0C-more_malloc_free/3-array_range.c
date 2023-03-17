#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	size = (max - min + 1);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
