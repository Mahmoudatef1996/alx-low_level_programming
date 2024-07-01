#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that check char is lower or not
 *@c: the function takes only on paramter
 * Return: return 1 if is slower , 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
