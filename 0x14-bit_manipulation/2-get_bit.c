#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: The integer number to be operated on
* @index: The index
* Return: will return the value of the bit at index or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

int value = ((n >> index) & 1);
return (value);
}
