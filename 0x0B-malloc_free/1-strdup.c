#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string into a pointer
 * @str: string
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
