#include <stdio.h>

/**
 * main - Entry of the program
 * 
 * Return:always return 0
 */
int main(void)
{
	int i;
	intsum = 0;
	for (i = 0; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	pdintf("%d\n", sum);
}
