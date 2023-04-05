#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list, sets head to NULL
* @head_of: a pointer to the head of the list
* Return: will return nothing
*/
void free_listint2(listint_t **head_of)
{
	listint_t *temporary;

	if (head_of == NULL)
		return;

	while (*head_of != NULL)
	{
		temporary = *head_of;
		*head_of = (*head_of)->next;
		free(temporary);
	}
	*head_of = NULL;
}
