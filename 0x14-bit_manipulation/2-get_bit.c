#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @num: The integer to be operated on
* @index: The index
* Return: will return the value of the bit at index or -1 on error
*/

int get_bit(unsigned long int num, unsigned int index)
{
if (index > 63)
return (-1);

int bit_value = ((num >> index) & 1);
return (bit_value);
}
