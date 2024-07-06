#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: the first parameter
 * @c: the charcter we want to search
 * Return: pointer to the char
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == '\0')
		return (NULL);
	else
		return (s);
}
