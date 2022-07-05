#include <stdio.h>

/**
 * main - coverts celsius to fshren
 *
 * Return: Always 0.
 */
int main()
{
	float fahren, celsius;
	float upper, lower, set;

	lower = 0.0;
	upper = 500.0;
	set = 20.0;

	celsius = lower;
	printf("Celsius\t Fahren\n");
	while (celsius < upper)
	{
		fahren = (celsius * 9.0/5.0) + 32;
		printf("%.1f\t %.0f\n", fahren, celsius);
		celsius += set;
	}
	return (0);
}
