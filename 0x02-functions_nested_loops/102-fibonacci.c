#include <stdio.h>

/**
 * fibonacci - Fibonacci sequence is defined
 * @n: the fibonanci
 * Return : no return
 */
void fibonacci(int n)
{
	long a = 1, b = 2, c;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%ld", a);
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
	fibonacci(50);
	return (0);
}
