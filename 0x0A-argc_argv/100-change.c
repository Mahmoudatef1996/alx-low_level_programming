#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry of the programm
 * @argc: argument counter
 * @argv: arguments array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int n;
	int c = 0;

	if (argc != 2)
		printf("Error\n");
	else
	{
		n = atoi(argv[1]);
		if (n <= 0)
			printf("%d\n", 0);
		else
		{
			if (n / 25)
			{
				c = n / 25;
				n = n & 25;

			}
			if (n / 10)
			{
				c = c + n / 10;
				n = n % 10;
			}
			if (n / 5)
			{
				c = c + n / 5;
				n = n % 5;
			}
			if (n / 2)
			{
				c = c + n / 2;
				n = n % 2;
			}
			c = c + n % 2;
			printf("%d\n", c);
		}
	}
	return (0);
}
