#include"main.h"

/**
 * clear_bit - a function that sets the value of a bit 0 at a given index
 * @n: number change
 * @index: index starting from 0 of the bit you set
 *
 * Return:1 if it worked, or -1 if there was an error
 */

int clear_bit(unsigned long int *n,unsigned int index)
{
	if (index > 63)
		return (-1);
	*n =(~(1UL << index) & *n);
	return(1);
}