#include "main.h"
/**
 * leet - replace letters with numbers
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	char leet_table[] = "aAeEoOtTlL44330771";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (s[i] == leet_table[j] || s[i] == leet_table[j + 1])
			{
				s[i] = leet_table[j + 10];
				break;
			}
		}
	}
	return (s);
}
