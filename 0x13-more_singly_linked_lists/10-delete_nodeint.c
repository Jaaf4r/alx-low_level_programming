#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index @index
 * of a listint_t linked list
 * @head: double pointer to the head of the listint_t linked list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = *head, *tmp;

	if (p == NULL)
		return (-1);

	if (index == 0)
	{
		*head = p->next;
		free(p);

		return (1);
	}

	while (p->next && (i + 1) != index)
	{
		p = p->next;
		i++;
	}

	if ((i + 1) == index && p->next)
	{
		tmp = p->next;
		p->next = tmp->next;
		free(tmp);

		return (1);
	}

	return (-1);
}
