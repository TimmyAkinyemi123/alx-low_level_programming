#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: pointer variable
 * Return: len
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ((char *) 0);
}

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				len++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return (len);
		}
		s++;
	}
	return (len);
}
