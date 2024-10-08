#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 *  followed by a new line.
 *  @n: this fun take only one parameter
 *  Return: no return
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				n--;
				continue;
			}
			else
				printf(", ");
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				n++;
				continue;
			}
			else
				printf(", ");
			n++;
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
