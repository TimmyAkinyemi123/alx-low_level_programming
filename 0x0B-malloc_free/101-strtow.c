#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * num_word - count words of a string
 * @str: character string
 * Return: number of words
 */
int num_word(char *str)
{
	int flag = 0, i = 0, w = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		i++;
	}
	return (w);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i = 0, j = 0, len = 0, words;
	int c = 0, start, end;

	while (*(str + len))
		len++;
	words = num_word(str); /* counts words in string */
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[j] = temp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
		i++;
	}
	matrix[j] = NULL;
	return (matrix);
}
