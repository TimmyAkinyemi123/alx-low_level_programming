#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j = 0, result = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			if (result < 10)
				_putchar(result + '0');
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((j + 1) * i < 10)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
