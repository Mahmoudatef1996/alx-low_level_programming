#include <stdio.h>

/**
 * fibonacci - Fibonacci sequence is defined
 * @n: the fibonanci
 * Return : no return
 */
void fibonacci(int n)
{
	int a = 0, b = 1, c;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a);
		if (i ==  n - 1)
			continue;
		printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");

}

/**
 * main - Entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci(51);
	return (0);
}
