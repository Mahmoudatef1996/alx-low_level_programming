#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square root of a number.
 * @n: the only parameter
 * Return: return an integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int start = 1;
	int end = n / 2;
	int ans = 0;
	int mid = start + (end - start) / 2;

	if ( start <= end && mid * mid == n)
		return (mid);
	else if ( mid * mid < n && start <= end)
		_sqrt_recursion (mid);
}
