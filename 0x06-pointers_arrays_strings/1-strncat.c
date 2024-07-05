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
	int i = 0;
	int j;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	j = i;
	while (j > 0)
	{
		dest--;
		j--;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i+j] = src[j];
		n--;
	}
	if (n > 0)
		dest[i+j] = '\0';
	return (dest);
}
