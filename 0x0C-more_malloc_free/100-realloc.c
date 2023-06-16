#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size on bytes for ptr
 * @new_size: new size for new pointer
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			new_ptr[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			new_ptr[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
