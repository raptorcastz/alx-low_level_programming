#include "main.h"
#include <stdlib.h>

/**
  *read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *		0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename,size_t letters)
{
	char *buffer;
	ssize_t a ,b ,z
	
	if (filename == NULL)
		return(0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	b = read(a, buffer,letters);
	z = write(STDOUT_FILENO,buffer,b);

	if (a == -1 || b == -1 || z == -1 || z != b)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(a);

	return(z);
}
