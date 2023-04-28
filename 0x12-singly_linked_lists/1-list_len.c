#include "lists.h"
#include <string.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: element to return
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
