#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a characterin a string
 * @s: string pointer
 * @c: character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ((char *) 0);
}
