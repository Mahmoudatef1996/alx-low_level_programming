#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: first parameter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char ch = '0' + c;

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
