#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array to reverse
 * @n: the number of element in array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		i++;
	}
}
