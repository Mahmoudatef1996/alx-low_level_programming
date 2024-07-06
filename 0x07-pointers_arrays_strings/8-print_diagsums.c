#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: the first parameter
 * @aize: the size of array
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 -i)];
	}
	printf("%d, %d", sum1 ,sum2);
	printf("\n");
}
