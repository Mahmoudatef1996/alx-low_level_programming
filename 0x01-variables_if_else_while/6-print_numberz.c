#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0'+i);
		i++;
	}
	putchar('\n');
	return (0);
}
