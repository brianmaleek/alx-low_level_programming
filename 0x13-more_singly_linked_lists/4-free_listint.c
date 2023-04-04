#include "lists.h"
/**
 * free_listint - frees a listint_t lists
 * @head: pointer to head of the listint_t list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
