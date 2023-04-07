include "main.h"

/**
 * get_endianness - function that checks if a machine is small or big Endian
 * Return: will return 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
