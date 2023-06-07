#include "main.h"
/**
 * _strlen - recursively finds length of string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - checks if start = end
 * @s: string
 * @start: beginning index of string
 * @end: end index of string
 * Return: 1 if successful
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}
