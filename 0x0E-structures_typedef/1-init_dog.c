#include "dog.h"
#include <stdlib.h>
/**
 * inti_dog -  initialize a variable of type struct dog
 * @d: variable of struct dog type
 * @name: name of the dog
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
