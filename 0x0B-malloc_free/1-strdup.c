#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the RRAY OF STRING WHIC NEED TO BE dublicated
 * Return: returns pointer of array
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	len++;
	if (len == 0)
		return (NULL);

	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	len = 0;
	while (*str != '\0')
	{
		if (dup == NULL)
			return (NULL);
		*dup = *str;
		dup++;
		str++;
		len++;
	}
	dup = dup - len;
	return (dup);

}
