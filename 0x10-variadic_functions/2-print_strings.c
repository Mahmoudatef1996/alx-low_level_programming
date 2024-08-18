#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - function that print strings
 * @separator: the char whic will be printed
 * @n: the number of strings to be printed
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *c;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
