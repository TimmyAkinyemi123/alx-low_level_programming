#include "main.h"
/**
 * _strpbrk - checks for match in strings
 * @s: first string
 * @accept: second string
 * Return: len
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
