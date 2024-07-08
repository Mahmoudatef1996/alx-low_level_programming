#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 
 *
 * @n: print array
 * Return: no return
 */
void print_times_table(int n)
{
	int i ;
	int j ;

	for (i = 0; i < n; i ++)
	{
		for ( j = 0; j < n; j++)
		{
			printf("%d", i * j);
			if (j == n - 1)
				continue;
			printf(", ");
		}
		_putchar('\n');
	}
}
