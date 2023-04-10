#include "main.h"
/**
 * append_text_to_file - append text to end of file
 * @filename: pointer to filename
 * @text_content: string to add at the end of the file
 *
 * Return: -1 if fail, 1 if it succeeds
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);
	close(file);
	return (-1);
}
