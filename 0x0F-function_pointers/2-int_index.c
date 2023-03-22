#include "function_pointers.h"

/**
 * int_index - search for integer in array via function pointer
 * @array: array containing elements
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 if not found or array not present
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
