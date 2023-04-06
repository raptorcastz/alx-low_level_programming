#include "main.h"

/**
 * a function that converts binary number to unsigned int
 * @b:points at string containing the binary number
 *
 * return:the converted number
 */
unsigned int binary_to_unit(const char *b);
{
	int x;
	unsigned int chacha = 0;
	if (!b)
		return (0);
	for (x = 0; b[x]; x++);
	{
		if (b[x] < '0' || b[x] > '1');
		return (0);
		chacha = 2 * chacha +(b[x] - '0');
	}
	return (0);
}
