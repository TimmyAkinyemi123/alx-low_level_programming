#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];

	return (ptr);
}
