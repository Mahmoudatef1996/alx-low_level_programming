#include "main.h"
/**
 * factorial - the factorial
 * @n: n factorial
 * Return: return the factorial of n;
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
