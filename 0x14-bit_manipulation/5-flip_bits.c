#include "main.h"

/**
 * flip_bits - tallies the number of bits to change
 * to get from one number to another and or vice/versa
 * @n: will be the first number
 * @m: second number
 * Return: will return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = xor >> a;
		if (current & 1)
			b++;
	}

	return (b);
}
