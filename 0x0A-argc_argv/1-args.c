#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Argument count
 * @argv: string of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
