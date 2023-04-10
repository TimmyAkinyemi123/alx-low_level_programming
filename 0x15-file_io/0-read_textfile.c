#include "main.h"
#include <stdlib.h>
/**
 * read__textfile - reads a text file and prints to STDOUT
 * @filename: name of file to be read
 * @letters: number of letters it should read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t num;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file, buffer, letters);
	num = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file);
	return (num);
}
