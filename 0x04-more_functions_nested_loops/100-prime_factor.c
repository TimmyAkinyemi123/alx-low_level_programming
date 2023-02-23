#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%lu\n", factor);
	return (0);
}
