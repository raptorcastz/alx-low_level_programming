#include"main.h"

/**
 * get_endianness - a function that checks the endianness size
 * Return: 0 for big endian,1 for little endian
 */
int get_endianness(void)
{
	unasigned int x=1
		char *z=(char *)&x;
	
	if (*z==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
