#include "main.h"
/**
 * append_text_to_file - adds text content to file
 * @filename: pointer to the name of file
 * @text_content: string of chars to add
 * Return: 1 if success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
