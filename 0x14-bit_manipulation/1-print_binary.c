#include "main.h"

/**
* print_binary - will be function that prints the binary representation of a number
* @num: the number to be printed in binary form
* Return: nothing
*/
void print_binary(unsigned long int num)
{
	int a, b = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = num >> a;

		if ((curr & 1) == 1)
		{
			_putchar('1');
			b++;
		}
		else if (b != 0)
			_putchar('0');
	}
	if (b == 0)
		_putchar('0');
}
