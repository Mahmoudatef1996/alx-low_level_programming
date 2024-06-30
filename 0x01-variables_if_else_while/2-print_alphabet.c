#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
