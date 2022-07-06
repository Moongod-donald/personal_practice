#include <stdio.h>

/**
 * main - check if getchar will return 0 or 1
 *
 * Return: Always 0.
 */
int main()
{
	int c;

	if (c = (getchar() != EOF))
	    printf("c = %d\t First\n", c);
	else
		printf("c = %d\t Second\n", c);

	return (0);
}
