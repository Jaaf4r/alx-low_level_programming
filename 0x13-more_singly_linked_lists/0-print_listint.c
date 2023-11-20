#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - prints all elements of a print_listint list
 *@h: pointer to a listint struct
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *p = h;

	if (h == NULL)
		return (0);
	for (i = 0; p; i++)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
	return (i);
}
