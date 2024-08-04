#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: the size of memory
 * Return: returns the pointer of memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);

}

