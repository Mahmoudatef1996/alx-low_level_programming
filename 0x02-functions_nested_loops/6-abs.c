#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: this function takes only one parametar
 * Return: return the absulute value
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);
	else
		return (n * -1);
}
