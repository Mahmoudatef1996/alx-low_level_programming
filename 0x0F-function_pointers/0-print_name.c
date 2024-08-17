#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: the name will be printed
 * @f: afunction
 * Reteurn: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
