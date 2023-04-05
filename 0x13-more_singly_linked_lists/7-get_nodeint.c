#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a
* listint_t linked list
* @head_of: the head of the list
* @index: the index of the node, starting at 0
* Return: will return the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head_of, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (!head_of)
		return (NULL);

	tmp = head_of;

	/* Checking if the node exists */
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (index >= i)
	{
		return (NULL);
	}

	i = 0;
	tmp = head_of;


	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
