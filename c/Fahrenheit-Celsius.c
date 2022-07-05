#include <stdio.h>

/**
 * main - converts fahren to cel
 *
 * Return: Always 0.
 */
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahr\t Celsius\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
