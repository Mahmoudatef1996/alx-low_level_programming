#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: first parameter
 * Return: 1 or 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
