#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
