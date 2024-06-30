#include <stdio.h>
/**
 * main - Enty of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'z')
		{
			ch = 'A';
			continue;
		}
		else if (ch == 'Z')
		{
			ch = 'z';
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
