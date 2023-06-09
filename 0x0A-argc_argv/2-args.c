#include <stdio.h>
/**
 * main - prints all the arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
