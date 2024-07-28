#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of array
 * @c: the c char
 * Return: retun null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return ("NULL");

	t = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);

}
