#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry of the programm
 * @argc: argument counter
 * @argv: arguments array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			char *p = argv[i];

			for (; *p; p++)
				if (!isdigit(*p))
				{
					printf("Error\n");
					return (0);
				}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);

	}
	else
		printf("%d\n", sum);
	return (0);
}
