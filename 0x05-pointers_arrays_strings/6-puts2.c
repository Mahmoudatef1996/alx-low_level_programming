#include "main.h"

/**
 * puts2- that prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: the only argument
 * Return: no return
 */
void puts2(char *str)
{
	int size = 0;
	int i;
	char ch;

	while (*str != '\0')
	{
		size ++;
		str++;
	}
	str = str - size;
	for (i = 0; i < size; i++)
	{
		ch = str[i];
		_putchar(ch);
		i++;
	}
}
