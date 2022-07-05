#include <stdio.h>

/**
 * main - prints the coversion of temperature fahren and celsius
 *
 * Return: Always 0.
 */
int main()
{
	float fahren, celsius;
	int upper, lower, set;

	upper = 300;
	lower = 0;
	set = 20;

	for (fahren = upper; fahren >= lower; fahren -= set)
		printf("%3.0f\t %6.1f\n", fahren, (5 * (fahren - 32)) / 9);
	return (0);
}
