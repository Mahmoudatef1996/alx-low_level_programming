#include <stdio.h>
#include "main.h"

/**
 * _strlen - unction that returns the length of a string.
 * @s: this function takes only one parameter
 *
 * Return: retunr the lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
