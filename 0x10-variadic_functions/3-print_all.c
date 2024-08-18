#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - function that print char
 * @args: the args to the function
 * Return: no return
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - function to print int
 * @args: the args
 * Return: no return
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - function that prints float
 * @args: the args of fun
 * Return: no return
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - function that print string
 * @args: the args of function
 * Return: no return
 */
void print_str(va_list args)
{
	char *c = va_arg(args, char *);

	printf("%s", c ? c : "(nil)");
}
/**
 * print_all - function that prints all functions
 * @format: the formate char
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, x;
	const format_spec_t format_specs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(args, format);
	i = 0, x = 0;
	while (format && format[i])
	{
		int j = 0;

		if (i != 0 && x == 1)
			printf(", ");
		while (format_specs[j].specifier && format[i] != format_specs[j].specifier)
			j++;
		if (format_specs[j].specifier)
		{
			format_specs[j].f(args);
			x = 1;
			i++;
			continue;
		}
		x = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
