#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * slen - function that returns the len of string
 * @s: the string
 * Return: returns the len of string
 */
int slen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - len;
	return (len);
}
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the first parameter
 * @av: the second parameter
 * Return: return pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = len + slen(av[i]) + 1;
	}
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0 ; i < ac; i++)
	{
		len = slen(av[i]);
		for (j = 0; j < len; j++)
		{
			*str = av[i][j];
			str++;
			x++;
		}
		*str = '\n';
		str++;
		x++;

	}
	*str = '\0';
	str = str - x;
	return (str);
}
