#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 * Return: the sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
