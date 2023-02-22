#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int next_num;
	int i;

	printf("%d, %d, ", num1, num2);
	for (i = 1; i <= 91; i++)
	{
		next_num = num1 + num2;
		printf("%d", next_num);
		if (i < 91)
			printf(", ");
		num1 = num2;
		num2 = next_num;
	}
	printf("\n");
	return (0);
}
