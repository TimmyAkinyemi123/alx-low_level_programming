#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int min = 1, i = 0, isi = 0;
	unsigned int ni = 0;

	while (s[i])
	{
		if (s[i] == '-')
			min *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}
		if (isi == 1)
			break;
		i++;
	}
	ni *= min;
	return (ni);
}
