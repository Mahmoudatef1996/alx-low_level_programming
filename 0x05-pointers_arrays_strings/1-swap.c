#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 *  Return: no return
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
