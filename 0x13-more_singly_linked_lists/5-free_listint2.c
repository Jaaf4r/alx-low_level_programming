#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head of listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head)
	{
		while (*head)
		{
			c = *head;
			*head = c->next;
			free(c);
		}
	}
}
