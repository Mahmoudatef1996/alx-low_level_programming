#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements
 * of an array of integers, followed
 * by a new line.
 * @a: yhe array
 * @n: the size of the array
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
