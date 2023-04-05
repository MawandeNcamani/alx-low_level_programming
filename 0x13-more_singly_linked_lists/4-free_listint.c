#include "lists.h"

/**
* free_listint - a function that frees a listint_t list
* @head_of: the head of the listint_t list
* Return: will return nothing
*/
void free_listint(listint_t *head_of)
{
	listint_t *temporary;

	while (head_of != NULL)
	{
		temporary = head_of;
		head_of = head_of->next;
		free(temporary);
	}
}
