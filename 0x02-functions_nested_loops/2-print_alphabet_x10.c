#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphapet 10 times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
