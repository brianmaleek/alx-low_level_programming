#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a linked listint_t list
 * @head: pointer to the address of the head of linked listint_t list
 * Return: return 0 if list is empty, oherwise sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
