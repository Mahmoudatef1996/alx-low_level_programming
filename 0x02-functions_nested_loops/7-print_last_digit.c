#include <stdio.h>
#include"main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: this function takes only on integer as parameter
 * Return: return one number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	while (n >= 10)
		n = n % 10;
	_putchar('0' + n);
	return (n);
}
