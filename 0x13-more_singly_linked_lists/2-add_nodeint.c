#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of listint_t list
 * @head: pointer to the address of the head of listint_t list
 * @n: the integer for new node
 * Return: return Null if fuction fails or address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
