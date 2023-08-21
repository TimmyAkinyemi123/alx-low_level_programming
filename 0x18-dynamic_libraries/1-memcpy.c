#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: pointer for dest *p
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (p);
}
