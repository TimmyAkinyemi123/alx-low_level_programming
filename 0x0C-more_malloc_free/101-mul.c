#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void _err(void);
int _strlen(char *s);
int _isdigit(char *s);
/**
 * _strlen - get length of string
 * @s: string literal
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _isdigit - checks if character of a string is digit
 * @s: string literal
 * Return: 1 if digit is found, 0 if otherwise
 */
int _isdigit(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] < '0' || s[c] > '9')
			return (0);
	}
	return (1);
}

/**
 * _err - prints error message
 */
void _err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int *result, c = 0, i, j, len, index, num, num1, num2;

	str1 = argv[1], str2 =argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		_err();
	i = _strlen(str1);
	j = _strlen(str2);
	len = i + j + 1;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (1);
	for (index = 0; index <= i + j; index++)
		result[index] = 0;
	for (i = i - 1; i >= 0; i--)
	{
		num1 = str1[i] - '0';
		num = 0;
		for (j = j - 1; j >= 0; j--)
		{
			num2 = str2[j] - '0';
			num += result[i + j + 1] + (num1 * num2);
			result[i + j + 1] = num % 10;
			num /= 10;
		}
		if (num > 0)
			result[i + j + 1] += num;
	}
	for (index = 0; index < len - 1; index++)
	{
		if (result[index])
			c = 1;
		if (c)
			_putchar(result[index] + '0');
	}
	if (c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
