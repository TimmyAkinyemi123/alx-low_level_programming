#include <unistd.h>
/**
 * _putchar - prints characters
 * @c: takes in a character
 * Return: 1 if successful, -1 on error
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
