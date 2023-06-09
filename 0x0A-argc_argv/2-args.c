#include <stdio.h>
/**
 * main - prints all the arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count > argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
