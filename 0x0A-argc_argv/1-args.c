#include <stdio.h>
/**
 * main - print number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 upon success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*in case of unuse*/
	printf("%i\n", argc -1);
	return (0);
}
