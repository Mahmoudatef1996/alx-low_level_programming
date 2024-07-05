#include "main.h"
/**
 * puts_half - Write a function that prints half of a strin
 * @str: the string
 * Return: no return
 */
void puts_half(char *str)
{
	int size = 0;
	int n;
	char ch;

	while (*str != '\0')
	{
		str++;
		size++;
	}
	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;
	str = str - n;
	while (*str != '\0')
	{
		ch = *str;
		_putchar(ch);
		str++;
	}
	_putchar('\n');
}
