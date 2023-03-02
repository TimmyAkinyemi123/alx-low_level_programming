#include "main.h"
#include "string.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer size
 * @size_r: string size
 * Return: n
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;
	int sum = 0;
	char temp;

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		if (k >= size_r || (k == size_r - 1 && carry != 0))
			return (0);
		r[k] = carry + '0';
		k++;
	}
	if (k >= size_r)
		return (0);
	r[k] = '\0';

	for (i = 0; i < k / 2; i++)
	{
		temp = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = temp;
	}
	return (r);
}
