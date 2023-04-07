#include "main.h"

/**
* clear_bit - is a function that clears the value of a bit some index
* @n: the number
* @index: the index
* Return: returns 1 if Success, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int myobj;

	if (index > 63)
		return (-1);

	myobj = 1 << index;

	*n = (*n & ~myobj);

	return (1);
}
