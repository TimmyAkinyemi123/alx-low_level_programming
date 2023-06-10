#include "main.h"
/**
 * _strncpy - copy string from src to dest
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
