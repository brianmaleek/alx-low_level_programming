#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: pointer to the address of the head of linked listint_t list
 * @index: index of node to be deleted. index starts at 0
 * Return: return 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}

	/* iterate to node before deletion of node*/
	current_node = *head;
	for (; i < (index - 1); i++)
	{
		if (current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
	}
	/* temp: node to be deleted*/
	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);
	return (1);
}
