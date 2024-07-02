#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c : first int parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
