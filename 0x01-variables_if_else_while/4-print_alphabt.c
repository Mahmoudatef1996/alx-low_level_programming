#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		else
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
