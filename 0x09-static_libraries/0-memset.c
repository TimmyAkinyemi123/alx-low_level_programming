#include "main.h"
/**
 * _memset - fill memory with a specific value
 * @s: starting address
 * @b: value to be inserted
 * @n: number of bytes to be change
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
