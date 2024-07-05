#include <stdio.h>
#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: the first str
 * @src: the src
 * @n: n bytes
 * Return: returnc pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n > 0)
		dest = '\0';
	return (dest);
}
