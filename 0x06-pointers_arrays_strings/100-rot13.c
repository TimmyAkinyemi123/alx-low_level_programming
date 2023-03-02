#include "main.h"
/**
 * rot13 - encode string characters
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] =
		"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rotated[j];
				break;
			}
		}
	}
	return (s);
}
