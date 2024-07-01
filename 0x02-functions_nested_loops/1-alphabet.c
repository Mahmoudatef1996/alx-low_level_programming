#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphapet
 *
 * Return: no return
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
/**
 * main - Entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
