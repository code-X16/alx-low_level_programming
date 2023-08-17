#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: node to free
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
