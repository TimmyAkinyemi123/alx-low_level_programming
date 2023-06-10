#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return (dest);
}
