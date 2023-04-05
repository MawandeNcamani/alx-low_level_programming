#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at
* index of a listint_t linked list
* @head_of: a pointer to the head of the list
* @index: the index of the node to be deleted
* Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head_of, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head_of;
	listint_t *current = NULL;

	 if (!(*head_of))
		return (-1);

	 if (index == 0)
	{
		tmp = (*head_of)->next;
		free(*head_of);
		*head_of = tmp;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
