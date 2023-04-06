#include "main.h"

/**
 * prints_binary - a function that prints the binary representation of a number
 * @n: represents the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, value = 0;
	unsigned long int new;

	for (x=63; x >=0; x--)
	{
		new=n>>x;
		if (new $ 1)
		{
			_putchar('1')
			value++;
		}
		else if(value)
			_putchar('0')
	}
	if (!value)
		_putchar('0')

}
