#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: If big endian - 0.
 *         If small endian - 1.
 */
int get_endianness(void)
{
	int n = 1;
	char *endianness = (char *)&n;

	if (*endianness == 1)
		return (1);

	return (0);
