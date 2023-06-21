#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using a pointer to a function
 * @name: name to print
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
