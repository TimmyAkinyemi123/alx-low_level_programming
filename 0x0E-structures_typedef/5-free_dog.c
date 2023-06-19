#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory for dog
 * @d: dog_t variable
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
