#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list or if it
 * fails exit the program with status 98
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("->[%p] %d\n", (void *)current, current->n);
			count++;
			break;
		}
	}
	return (count);
}
