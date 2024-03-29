#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the
* data points (n) of a listint_t linked list
* @head_of: the head of the list
* Return: will return the sum of all the n's
*/
int sum_listint(listint_t *head_of)
{
	int sum = 0;
	listint_t *tmp = head_of;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
