#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_num - checks it is a number
 * @str: string of char passed to it
 * Return: 0 Success, 1 Error
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit (str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int count = 1, convert, sum;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			convert = atoi(argv[count]);
			sum += convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
