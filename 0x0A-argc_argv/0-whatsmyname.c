#include <stdio.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc; /* in case of unuse*/
	printf("%s\n", argv[0]);
	return (0);
}
