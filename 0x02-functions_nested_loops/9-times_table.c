#include <stdio.h>
#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul > 10)
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			if (j == 9)
				continue;
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
