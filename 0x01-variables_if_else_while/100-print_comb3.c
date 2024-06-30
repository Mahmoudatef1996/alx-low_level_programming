#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
