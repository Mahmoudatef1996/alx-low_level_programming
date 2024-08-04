#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - unction that creates an array of integers.
 * @min: the min
 * @max: the max
 * Return: returns an array of integers
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int i;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
