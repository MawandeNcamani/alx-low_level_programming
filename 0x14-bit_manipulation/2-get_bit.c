#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: The integer to be operated on
* @index: The index
* Return: The value of the bit at index or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

int bit_value = ((n >> index) & 1);
return (bit_value);
}
