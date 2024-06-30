#include <stdio.h>
/**
 * main - Enty of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
