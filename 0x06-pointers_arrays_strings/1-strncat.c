#include "main.h"
/**
 * _strncat - concatenate functions
 * @dest: destination
 * @src:source
 * @n: number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + n] = '\0';

	return (dest);
}

