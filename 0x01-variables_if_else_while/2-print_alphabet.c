#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
