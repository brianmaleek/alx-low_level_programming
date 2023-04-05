#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list
 * @head: pointer to the address of the head pointer of listint_t list
 * Return: a pointer to the first node of th reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
