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
	int k = 0;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{

				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
