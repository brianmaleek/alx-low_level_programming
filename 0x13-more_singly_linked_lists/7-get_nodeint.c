#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a liked list
 *
 * @head: pointer to the address of the head pointer of linked
 * listint_t list
 *
 * @index: index of node starting at 0
 *
 * Return: return NULL if node is non existant, otherwise return
 * nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i < index || current == NULL)
	{
		return (NULL);
	}
	return (current);
}
