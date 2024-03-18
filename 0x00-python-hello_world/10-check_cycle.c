#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: pointer to the list of the linked list
 * This function checks if a given linked list contains a cycle
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */

int check_cycle(listint_t *list)
{
	listint_t *slow_ptr = list;
	listint_t *fast_ptr = list;

	if (!list)
		return (0);

	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		return (1);
	}

	return (0);
}
