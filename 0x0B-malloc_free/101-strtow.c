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
 * strtow -  function that splits a string into words.
 * @str: the string
 * Return: return array of string
 */
char **strtow(char *str)
{
	char **s;
	int j = 0, i = 0, len;

	if (str == NULL || *str == '\0' )
		return (NULL);
	len = slen(str);
	s = malloc(sizeof(char *) * len);
       if (s == NULL)
	       return (NULL);
       while (*str != '\0')
       {
	       i = 0;
	       if (*str != ' ')
	       {
		       str++;
		       i++;
	       }
	       else
	       {
		       s[i] = malloc(sizeof(char)* (i+1));
		       if (s[i] == NULL)
			       return (NULL);
		       while (i >= 0 )
		       {
			       s[j][i] = str[i];
			       i--;
		       }
	       }
	       j++;
       }
       return (s);
}
