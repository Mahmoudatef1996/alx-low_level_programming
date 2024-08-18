#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: the char whic will be printed
 * @n: the number of strings to be printed
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0 ; i < n; i++)
	{
		x = va_arg(args, int);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", x);
	}
	printf("\n");
	va_end(args);
}
