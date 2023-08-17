#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int number)
{
	int original = number;
	int reversed = 0;

	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}
	return (original == reversed);
}

int main()
{
	int large = 0, i, j;
	int product;
	FILE *file;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			product = i * j;
			if (product > large && is_palindrome(product))
				large = product;
		}
	}
	file = fopen("102-result", "w");
	if (file == NULL)
	{
		printf("Error opening file.\n");
	       	return (1);
	}
	fprintf(file, "%d", large);
	fclose(file);
	printf("Largest palindrome: %d\n", large);
	return 0;
}
