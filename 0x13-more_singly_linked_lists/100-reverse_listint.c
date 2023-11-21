#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: double pointer to head of the listint_t linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *p;

	if (*head == NULL)
		return (NULL);

	p = NULL;
	next_node = (*head)->next;
	(*head)->next = p;
	p = *head;

	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = p;
		p = *head;
	}
	return (*head);
}
