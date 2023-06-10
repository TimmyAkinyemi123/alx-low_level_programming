#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: destination value
 * @src: source value
 * Return: new destination value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
