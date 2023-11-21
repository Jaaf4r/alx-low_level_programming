#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double poinetr to head node
 * Return: the head node’s data (n), 0 if linked list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node_todelete;
	int n;

	if (*head == NULL)
		return (0);

	node_todelete = *head;
	*head = node_todelete->next;
	n = node_todelete->n;
	free(node_todelete);
	return (n);
}
