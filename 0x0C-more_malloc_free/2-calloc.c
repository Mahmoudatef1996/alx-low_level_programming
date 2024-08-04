#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the first parameter
 * @size: the size
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i = nmemb * size;
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(i);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)ar + i) = 0;
	return (ar);
}
