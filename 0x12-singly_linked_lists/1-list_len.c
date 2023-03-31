#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list list_t
 * Return: number of elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
