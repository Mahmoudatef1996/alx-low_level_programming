#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: this function takes only one parameter
 *
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
