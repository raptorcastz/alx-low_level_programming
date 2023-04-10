#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b:the string containing the binary number
 *
 * Return:the converted binary number
 */
unsigned int binary_to_unit(const char *b)
{
	int x;
	unsigned int chacha = 0;
	
	if (!b)
	return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
	if (b[x] < '0' || b[x] > '1')
		return (0);
	chacha = 2 * chacha + (b[x] - '0');
	}
	return (chacha);
}
