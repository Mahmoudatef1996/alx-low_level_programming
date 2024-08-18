#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sum all arguments
 * @n: the number of arguments
 * Return : returns the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);
	return (sum);
}
