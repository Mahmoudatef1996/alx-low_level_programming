#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the first parameter
 * @accept: the second parameter
 * Return: return char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *accept != '\0'; i++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = accept - i;
		s++;
	}
	return (NULL);
}
