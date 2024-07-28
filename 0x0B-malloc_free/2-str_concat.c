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
 * str_concat -  function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: return pointer of the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = slen(s1);
	int len2 = slen(s2);
	char *con;
	
	if ( s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		con = malloc(sizeof(char) * len2);
		if (con == NULL)
			return (NULL);
		while (*s2 != '\0')
		{
			*con = *s2;
			con++;
			s2++;
		}
		con = con - len2;
		return (con);
	}
	if (s1 != NULL && s2 == NULL)
	{
		con = malloc(sizeof(char) * len1);
		if (con == NULL)
			return (NULL);
		while (*s1 != '\0')
		{
			*con = *s1;
			con++;
			s1++;
		}
		con = con - len1;
		return (con);
	}	

	con = malloc(sizeof(char) * (len1 + len2 + 1));
	if (con == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*con = *s1;
		s1++;
		con++;
	}
	while (*s2 != '\0')
	{
		*con = *s2;
		s2++;
		con++;
	}
	*con = '\0';
	con = con - len1 - len2;
	return (con);

}
