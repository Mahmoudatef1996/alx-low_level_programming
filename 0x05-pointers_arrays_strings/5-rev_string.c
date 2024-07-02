#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: this function takes only one argument
 * Return: no return;
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s - i);
		*(s - i) = *(s - len + 1 + i);
		*(s - len + 1 + i) = temp;
	}
}
