#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: no. of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
