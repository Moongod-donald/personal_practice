#include <stdio.h>

/**
 * main - checks the pointer
 *
 * Return: Always 0
 */
void modif_my_param(int *m);
int main()
{
	int n;

	n = 98;
	printf("The value of n hers is: %d\n", n);
	modif_my_param(&n);
	printf("The value of n is: %d\n", n);
	return (0);
}

void modif_my_param(int *m)
{
	*m = 402;
}
