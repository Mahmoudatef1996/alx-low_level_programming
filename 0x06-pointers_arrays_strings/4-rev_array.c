#include <stdio.h>
#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: array of elements
 * @n: the size of array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
