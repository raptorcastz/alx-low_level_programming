#include "main.h"

/**
 * get_endianness - this function checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);

}
