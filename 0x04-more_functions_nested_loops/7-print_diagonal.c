#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - unction that draws a diagonal line on the terminal.
 * @n:the only parameter
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;
	if (n > 0)
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			else
				_putchar(' ');

		}
		_putchar('\n');
	}
	else
		_putchar('\n');
	
}
