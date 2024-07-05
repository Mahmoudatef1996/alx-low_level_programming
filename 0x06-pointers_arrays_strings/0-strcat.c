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

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
