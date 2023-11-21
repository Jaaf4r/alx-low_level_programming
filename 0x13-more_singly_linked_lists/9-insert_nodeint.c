#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of listint_t linked list
 * @idx: index where new node should be inserted
 * @n: element n of the node to be inserted
 * Return: the address of the new node,
 * NULL if it failed
 * NULL if it is not possible to add the new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p = *head, *new;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (p && ((i + 1) != idx))
	{
		p = p->next;
		i++;
	}

	if ((i + 1) == idx)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = p->next;
		p->next = new;
		return (new);
	}
	return (NULL);
}
