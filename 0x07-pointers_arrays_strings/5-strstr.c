#include <stddef.h>
/**
 * _strstr -  function that locates a substring
 * @haystack: the first parameter
 * @needle: the second parameter
 * Return: pointer of char
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	int i = 0;

	while (*needle != '\0')
	{
		i++;
		needle++;
	}
	if (i == 0)
		return (NULL);
	needle = needle - i;
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			start = needle;
			needle++;
			i++;
			while (*needle != '\0' && *haystack != '\0' && *needle == *(haystack + 1))
			{
				needle++;
				i++;
				haystack++;
			}
			if (*needle == '\0')
				return (start);
			needle = needle - i;

		}
		haystack++;

	}
	return (NULL);
}
