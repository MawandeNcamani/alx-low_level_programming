#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head_of);
size_t print_listint_safe(const listint_t *head_of);

/**
 * looped_listint_len - Checks number of unique nodes
 *                      in a looped listint_t linked list.
 * @head_of: A pointer to the head of the listint_t to check.
 *
 * Return: Not Looped List - 0.
 *         Else return the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head_of)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head_of == NULL || head_of->next == NULL)
		return (0);

	tortoise = head_of->next;
	hare = (head_of->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head_of;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head_of: Returns a pointer to the head of the listint_t list.
 *
 * Return: Will return number of nodes in the list if appl.
 */

size_t print_listint_safe(const listint_t *head_of)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head_of);

	if (nodes == 0)
	{
		for (; head_of != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head_of, head_of->n);
			head_of = head_of->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head_of, head_of->n);
			head_of = head_of->next;
		}

		printf("-> [%p] %d\n", (void *)head_of, head_of->n);
	}

	return (nodes);
}
