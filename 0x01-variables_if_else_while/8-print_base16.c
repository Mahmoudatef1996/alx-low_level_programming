#include <stdio.h>
/**
 * main - Enty of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
