#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints minimum amount of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int i = 0, change = 0, amount;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* extract the amount from command line and convert it to integer*/
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5 && amount >= 0)
	{
		while (amount >= coins[i])
		{
			change++;
			amount -= coins[i];
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
