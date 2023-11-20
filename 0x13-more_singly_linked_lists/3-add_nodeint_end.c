#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to list's head
 * @n: int to add at the end
 * Return: address of new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *c = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);

	if (c != NULL)
	{
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
