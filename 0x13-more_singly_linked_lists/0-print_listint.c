#include "lists.h"

/**
* print_listint - a function that prints all the elements of a listint_t list
* @myvar: a pointer to a listint_t list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *myvar)
{
	size_t f = 0;

	if (myvar == NULL)
		return (f);

	while (myvar != NULL)
	{
		printf("%d\n", myvar->n);
		f++;
		myvar = myvar->next;
	}

	return (f);
}
