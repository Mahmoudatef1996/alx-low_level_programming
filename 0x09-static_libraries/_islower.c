#include <stdio.h>
#include "main.h"
/**
 * _islower - function that check char is lower or not
 *@c: the function takes only on paramter
 * Return: return 1 if is slower , 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
