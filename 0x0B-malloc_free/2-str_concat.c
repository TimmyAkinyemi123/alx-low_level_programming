#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: second input
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	cat = malloc(sizeof(char) * (i + j + 1));

	if (cat == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++, j++;
	}
	cat[i] = '\0';

	return (cat);
}
