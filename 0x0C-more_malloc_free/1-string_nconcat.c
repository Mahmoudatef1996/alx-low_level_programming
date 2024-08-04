#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * slen - function that returns the len of string
 * @s: the string
 * Return: returns the size of string
 */
unsigned int slen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - len;
	return (len);
}
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the size
 * Return: return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *str;

	size1 = slen(s1);
	size2 = slen(s2);

	if (size2 <= n)
		n = size2;

	str = malloc(sizeof(char) * (size1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[size1 + i] = s2[i];
	str[size1 + n] = '\0';
	return (str);
}
