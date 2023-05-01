#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: head of the list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *s;
	int m;

	if (head == NULL || *head == NULL)
		return (0);
	s = *head;
	*head = s->next;
	m = s->n;
	free(s);
	return (m);
}
