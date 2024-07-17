#include <stdio.h>
#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @dest: the fist argument
 * @src: the second argument
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	while (i > 0)
	{
		dest--;
		i--;
	}
	return (dest);
}
