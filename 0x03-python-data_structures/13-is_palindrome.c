#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: ptr to the first node in the list
 *
 * Return: ptr to the first node in the new list
 */

void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

/**
 * is_palindrome - function that checks if a linked list is a palindrome
 * @head: double ptr to the linked list
 *
 * Return: 1 if it is, otherwise 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *tmp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reverse_listint(&dup);

	while (dup && tmp)
	{
		if (tmp->n == dup->n)
		{
			dup = dup->next;
			tmp = tmp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}