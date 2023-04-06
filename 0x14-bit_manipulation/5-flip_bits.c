#include"main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to flip to get from one number to another
 * @n: number that comes first 
 * @m: second number
 *
 * return:number of new bits expected to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, value =o;
	unsigned long int now;
	unsigned long int new= n ^m;

	for (x=63; x>=0;x--)
	{
		now=new>>x;
		if (now & 1)
			value++;
	}
	return (value);
}	

