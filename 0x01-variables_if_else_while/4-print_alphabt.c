#include <stdio.h>
/**
 * main - Entry of the programm
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
