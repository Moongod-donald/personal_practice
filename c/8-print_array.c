#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array using its number of element
 * @a: a pointer to array
 * @n: the number of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
		i++;
	}
}
