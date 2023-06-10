#include "main.h"
/**
 * _strstr - find a string within a string
 * @haystack: string to check
 * @needle: string to check for
 * Return: haystack or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;

	while (*haystack != '\0')
	{
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
