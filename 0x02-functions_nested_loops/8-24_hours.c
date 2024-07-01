#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of the da
 * y of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: no return
 */
void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
