#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b:  the size of memory
 * Retuen: returns the pointer of memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;
	
	a = malloc(sizeof(unsigned int ) * b);
	if (a == NULL)
		exit(1);

}

