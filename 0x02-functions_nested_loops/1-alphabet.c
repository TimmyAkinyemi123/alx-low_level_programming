#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints lowercase alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
/* main - main block */
int main(void)
{
	print_alphabet();
	return (0);
}
