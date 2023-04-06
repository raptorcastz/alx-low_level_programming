#include "main.h"

/**
 * converts_binary_to_unit - converts a binary number to unsigned int
 * @b:the string containing the binary number
 *
 * Return:the converted number,or 0 
 *
 * if there is one or more chars in string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int chacha = 0;

	if (b==NULL)
		return(0);
	while (*b !='\0')
	{
		if (*b !-'0'&& *b !='1')
			return(0);
		chacha <<=1;
		chacha +=*b - '0';
		b++
	}

	return(chacha);
}


