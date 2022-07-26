#include <stdio.h>

/**
 * sumDigits - sums the whole digits in an int > unit
 * @n: the digits to calculate on
 *
 * Return: int
 */
int sumDigits(int n)
{
	if (n == 0)
		return (0);
	return ((n % 10) + sumDigits(n / 10));
}

int main(void)
{
	printf("%i\n", sumDigits(9237));
	return (0);
}
