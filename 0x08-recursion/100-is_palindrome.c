#include "main.h"

/**
 * _strlen - Calculates the length of a string recursively
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome_helper - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @start: The start index of the string to check
 * @end: The end index of the string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (_is_palindrome_helper(s, 0, len - 1));
}
