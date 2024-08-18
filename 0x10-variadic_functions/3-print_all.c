#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_char(va_list args)
{
	printf("%c",va_arg(args, int));
}
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));

}
void print_str(va_list args)
{
	printf("%s", va_arg(args, char *));
}
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
	i = 0, x =0;
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
