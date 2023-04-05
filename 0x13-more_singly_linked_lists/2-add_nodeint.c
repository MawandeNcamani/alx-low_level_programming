#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning
* of a listint_t list
* @header: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns the address of the new element
*/
listint_t *add_nodeint(listint_t **header, const int n)
{
	listint_t *newest = malloc(sizeof(listint_t));

	if (newest == NULL)
		return (NULL);

	if (*header == NULL)
	{
		newest->n = n;
		newest->next = NULL;
		*header = newest;

		return (newest);
	}

	 newest->next = *header;
	newest->n = n;
	*header = newest;

	return (newest);
}
