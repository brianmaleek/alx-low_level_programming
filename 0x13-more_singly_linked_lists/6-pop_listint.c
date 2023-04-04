#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked listint_t list
 * @head: pointer to the address of the head of linked listint_t list
 * Return: return 0 if linked list empty,otherwise return deleted
 * head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;

	free(temp);

	return (data);
}
