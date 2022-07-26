#include "main.h"

int n_sqr(int n, int n1);
/**
 * sqrt_recursion - prints the square root of a number
 * @n: the number
 *
 * Return. int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (n_sqr(n, 0));
}

/**
 * n_sqr - find the square root of a num
 * @n: the interger
 * @n1: loop
 *
 * Return. int.
 */
int n_sqr(int n, int n1)
{
	if (n1 * n1 > n)
		return (-1);
	if (n1 * n1 == n)
		return (n1);
	return (n_sqr(n, n1 + 1));
}
