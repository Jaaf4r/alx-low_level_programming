#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 * @head: pointer to head of listint_t linked list
 * @index: index of the returned node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp = head;

	while (tmp && (c < index))
	{
		tmp = tmp->next;
		c++;
	}
	if (c < index)
		return (NULL);
	return (tmp);
}
