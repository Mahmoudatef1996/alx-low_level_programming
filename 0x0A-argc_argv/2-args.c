#include <stdio.h>

/**
 * main - Entry of the programm
 * @argc: argument counter
 * @argv: arguments array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
