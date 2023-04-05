#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list
 * @head: pointer to the address of the head pointer of listint_t list
 * Return: a pointer to the first node of th reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
