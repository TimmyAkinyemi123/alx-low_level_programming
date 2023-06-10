#include "main.h"
/**
 * _isalpha - checks if input is alphabet
 * @c: input character
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
