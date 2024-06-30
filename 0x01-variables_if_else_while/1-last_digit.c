#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	int n;
	int temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	temp = n;
	while (temp > 10)
	{
		temp = temp % 10;
	}
	if (temp > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (temp == 0)
		printf("Last digit of %d and is 0\n", n);
	else
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
