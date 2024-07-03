#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size: the size of drawing
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i < size - 1 - j)
					_putchar(' ');
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
