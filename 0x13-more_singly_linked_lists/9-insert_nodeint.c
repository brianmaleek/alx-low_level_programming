#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the address of the head of linked listint_t list
 * @idx: index of list where the new node is added. index starts at 0
 * @n: integer added to new node
 * Return: return address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i = 0;

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/* insert at head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* traverse list to find position */
	prev_node = *head;
	for (; i < (idx - 1); i++)
	{
		if (prev_node == NULL || prev_node->next == NULL)
			return (NULL);
		prev_node = prev_node->next;
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
