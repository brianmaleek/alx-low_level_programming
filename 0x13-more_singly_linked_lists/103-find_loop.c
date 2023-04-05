#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in linked listint_t list
 * @head: pointer to address of the head pointer of linked list
 * Return: if no loop - NULL otherwise size of the list free'd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
		{
			slow = head;
			break;
		}
		if (!slow || !fast || !fast->next)
			return (NULL);
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	return (fast);
}
