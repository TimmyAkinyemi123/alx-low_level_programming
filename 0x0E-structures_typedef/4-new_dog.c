#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * _strcpy - copies string pointed to by src
 * @dest: destination string
 * @src: source
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len])
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create a new dog with members
 * @name: name of dog
 * @age:age of dog
 * @owner: owner's name
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j; /* for length of strings*/

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
