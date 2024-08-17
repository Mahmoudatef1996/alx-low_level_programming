#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that sum a and b
 * @a: the first int
 * @b: the second int
 * Return: return the sum of a nad b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference between a and b
 * @a: the first int
 * @b: the 2nd int
 * Return: return the diff between the two int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that product of a and b
 * @a: the first int
 * @b: the 2nd int
 * Return: return the product of the two int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that div a of b
 * @a: the first int
 * @b: the second int
 * Return: return the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the function which remind the div
 * @a: the first int
 * @b: the 2nd int
 * Return: return remind of div
 */
int op_mod(int a, int b)
{
	return (a % b);
}
