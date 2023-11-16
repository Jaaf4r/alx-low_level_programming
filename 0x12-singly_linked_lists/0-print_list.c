#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	for (; tmp; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (i);
}
