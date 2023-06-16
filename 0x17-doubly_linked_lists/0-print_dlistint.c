#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
  * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
