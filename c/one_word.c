#include <stdio.h>

/**
 * main - printts the input
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;
	while (i)
	{
		char c[20] = "This is a string";
		int j = 0;

		while (c[j] != '\0')
		{
			putchar(c[j]);
			j++;
		}
		putchar('\n');
		i = 0;
	}
	return (0);
}
