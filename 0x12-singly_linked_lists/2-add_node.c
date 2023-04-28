#include "lists.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: head of a list_t list
 * @str: value to insert into element
 *
 * Return: number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	a->str = strdup(str);

	a->len = _strlen(str);
	a->next = *head;
	*head = a;

	return (a);
}
