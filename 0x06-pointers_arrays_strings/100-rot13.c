#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if
			((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			{
				*p -= 13;
			}
		p++;
	}
	return (s);
}
