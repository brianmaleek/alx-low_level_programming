#include "lists.h"

/**
 * free_listint2 - frees a linked list, sets head to NULL
 * @head: pointer to head of the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if(head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
}
