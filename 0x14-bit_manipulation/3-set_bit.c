#include "main.h"

/**
* set_bit - a function that sets the value of a bit to 1 at a given index
* @n: the number to be operated on
* @index: the index
* Return: will return 1 for Success and -1 error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	*n = (*n & ~j) | (1 << index);

	 return (1);
}
