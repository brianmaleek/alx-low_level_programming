#include "lists.h"

/**
 * listint_len - returns number of elemens in a linked list
 * @h: list
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
