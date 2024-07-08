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
	long sum = 0;

	for (i = 0; i < n; i++)
	{
		if (sum <= 4000000)
		{
			if (a % 2 == 0)
				sum += a;
		}
		else 
			break;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

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
