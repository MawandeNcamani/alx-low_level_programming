#include "lists.h"

/**
* listint_len - a function that returns the number of elements
* in a linked listint_t list
* @myvar: a pointer to a listint_t list
* Return: returns the number of elements in the list
*/
size_t listint_len(const listint_t *myvar)
{
	size_t f = 0;

	if (myvar == NULL)
		return (0);
	while (myvar != NULL)
	{
		f++;
		myvar = myvar->next;
	}

	return (f);
}
