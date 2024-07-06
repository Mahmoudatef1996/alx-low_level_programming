#include <stdio.h>
/**
 * main -Entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	int tens;
	int units;

	for (tens = 0; tens <= 9; tens++)
	{
		for (units = 0 ; units <= 9; units++)
		{
			putchar(tens + '0');
			putchar(units + '0');

			 if (tens != units)
			 {
				  putchar(',');
				  putchar(' ');
			 }
			 else
				 putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
