#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: constant pointer type listint_t
 *
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
