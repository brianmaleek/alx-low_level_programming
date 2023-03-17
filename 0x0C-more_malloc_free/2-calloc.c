#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array nmemb
 *           elements of size bytes and returns a pointer
 *           to the allocated memory that is set to 0.
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
