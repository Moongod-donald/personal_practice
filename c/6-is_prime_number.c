#include "main.h"
#include <stdio.h>

int prime_check(int n, int n1);
/**
 * is_prime_number - checks if the value is a prime number
 * @n: The int value
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (prime_check(n, 1));
}

/**
 * prime_check - check if the number is a prime number
 * @n: the number
 * @n1: the koop
 *
 * Return: int
 */
int prime_check(int n, int n1)
{
	if (n % n1 == 0 && n1 != 1 && n1 != n)
		return (0);

	if (n1 >= n)
		return (1);
	return (prime_check(n, n1 + 1));
}
