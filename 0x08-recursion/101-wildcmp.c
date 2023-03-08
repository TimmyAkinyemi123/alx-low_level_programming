#include "main.h"

/**
 * match - Recursively compare two strings
 *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp - Compare two strings, allowing for wildcards
 *
 * @s1: The first string to compare
 * @s2: The second string to compare, with possible wildcards
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (match(s1, s2));
}

