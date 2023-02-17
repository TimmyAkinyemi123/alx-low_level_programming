#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main function
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
