#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long long int n = 612852475143;
	long long int factor = 2;
	long long int largest_factor = 1;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest_factor = factor;
			n /= factor;
			while (n % factor == 0)
			{
				n /= factor;
			}
		}
		factor++;
	}
	printf("%lld\n", largest_factor);
	return (0);
}
