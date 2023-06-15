#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: cat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, j = 0, len = 0, len2 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		cat = malloc(sizeof(char) * (len + n + 1));
	else
		cat = malloc(sizeof(char) * (len + len2 + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cat[i] = s1[i];
	while (n < len2 && i < (len + n))
		cat[i++] = s2[j++];
	while (n >= len2 && i < (len + len2))
		cat[i++] = s2[j++];
	cat[i] = '\0';
	return (cat);
}
