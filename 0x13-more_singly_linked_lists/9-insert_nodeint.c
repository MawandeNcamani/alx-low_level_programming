#include "lists.h"

/**
* insert_node_at_index - a function that inserts a new
* node at a given position
* @head_of: a pointer to the head of the linked list
* @index: the index of the list where the new node should be added.
* Index starts at 0
* @n: the data to be added to the new node
* Return: returns the address of the new node
*/
listint_t *insert_node_at_index(listint_t **head_of, unsigned int index, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0;

	if (!head_of)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = (*head_of);
		*head_of = new;
		return (new);
	}

	tmp = *head_of;

	for (i = 0; tmp && i < index; i++)
	{
		if (i == index - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
