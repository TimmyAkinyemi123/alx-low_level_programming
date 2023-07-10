#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read a text file and print to stdout
 * @filename: pointer to name of the file
 * @letters: no of letters the function shld read and print
 * Return: if failed, 0 or no of bytes the function can read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
