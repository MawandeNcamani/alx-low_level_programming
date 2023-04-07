#include "main.h"

/**

* binary_to_uint - Converts a string of binary numbers to an unsigned int

* @b: a pointer to a string of binary numbers

* Return: The converted unsigned int value

*/

unsigned int binary_to_uint(const char *b)
{
unsigned int i, n;

if (!b)
return (0);

for (i = 0, n = 0; b[i]; i++)
{
if (b[i] == '0' || b[i] == '1')
{
n <<= 1;
n += b[i] - '0';
}
else
return (0);
}

return (n);
}
