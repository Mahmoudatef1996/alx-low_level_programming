#include <stdio.h>

/**
 * fibonacci - Fibonacci sequence is defined
 * @n: the fibonanci
 * Return : no return
 */
void fibonacci(int n)
{
	unsigned long int t0 = 1, t1 = 2;
	unsigned long int next;
	int i;

	printf("%lu, %lu, ", t0, t1);
	for (int i = 3; i <= 98; ++i)
	{
		next = t0 + t1;
		if (i != n)
		{
			printf("%lu, ", next);
		}
		else
			printf("%lu\n", next);
		t0 = t1;
		t1 = next;

	}
}

/**
 * main - Entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	fibonacci(98);
	return (0);
}
