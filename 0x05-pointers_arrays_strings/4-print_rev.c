#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new
 *
 * @s: this function takes only one argument
 * REturn: no return
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0 ; i < len; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
