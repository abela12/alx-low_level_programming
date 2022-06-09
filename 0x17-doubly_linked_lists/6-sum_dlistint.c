#include "lists.h"

/**
 * sum_distinct - Sum of all data (n)
 *
 * @head: Head of node
 *
 * Return: void
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
