#include "main.h"

/**
 * swap_int - swaps number
 * @a: the first int
 * @b: the second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
