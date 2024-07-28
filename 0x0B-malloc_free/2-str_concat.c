#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: return pointer of the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *con;
	
	if ( s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1 != NULL || *s1 != '\0')
	{
		len1++;
		s1++;
	}
	while (s2 != NULL || *s2 != '\0')
	{
		len2++;
		s2++;
	}
	s1 = s1 - len1;
	s2 =s2 - len2;
	len1++;
	len2++;
	if (s1 == NULL && s2 != NULL)
	{
		con = malloc(sizeof(char) * len2);
	
		while (*s2 != '\0')
		{
			*con = *s2;
			con++;
			s2++;
		}
		*con = '\0';
		con = con - len2;
		return (con);
	}
	if (s1 != NULL && s2 == NULL)
	{
		con = malloc(sizeof(char) * len1);
		while (*s1 != '0')
		{
			*con = *s1;
			con++;
			s1++;
		}
		*con = '\0';
		con = con - len1;
		return (con);
	}

	con = malloc(sizeof(char) * (len1 + len2 - 1));

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
	con = con - len1 - len2 -1;
	return (con);

}
