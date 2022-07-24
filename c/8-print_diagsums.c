#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagnoals int
 * @a: the array
 * @size: the size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	long int sum1, sum2;
	int i;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
