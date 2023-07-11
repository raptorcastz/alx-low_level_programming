#include "main.h"
#include <stdlib.h>

/**
  *read_text_file- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *		0 when function fails or filename is NULL.
 */
ssize_t read_text_file(const char *filename,size_t letters)
{
	char *buffer;
	ssize_t a ,b ,z;
	
	if (filename == NULL)
		return(0);
	{
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);
	}
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		free(buffer);
		return(0);
	}

	b = read(a, buffer,letters);
	if (b == -1)
	{
		free(buffer);
		close(a);
		return (0);
	}
	z = write(STDOUT_FILENO,buffer,b);
	if (z == -1 || z !=b)
	{
		free(buffer);
		close(a);
		return (0);
	}
	free(buffer);
	close(a);

	return(z);
}
