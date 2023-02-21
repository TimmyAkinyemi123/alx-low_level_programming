#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: c is the character to be printed
 *
 * Return: on success 1.
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
