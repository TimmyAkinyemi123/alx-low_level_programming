#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * _strspn: returns the number of bytes in s
 * @s: string
 * @accept: pointer variable
 * Return: NULL and s
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
