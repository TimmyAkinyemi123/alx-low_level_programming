#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 * Return: 0
 */
int main(void)
{
	char am;

	for (am = '0'; am <= '9'; am++)
	{
		putchar(am);
	}
	for (am = 'a'; am <= 'f'; am++)
	{
		putchar(am);
	}
	putchar('\n');
	return (0);
}
