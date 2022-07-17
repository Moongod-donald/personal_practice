#include "main.h"
#include <stdio.h>

/**
 * main - checks my code
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch1[] = "abcdef";
	char ch2[] = "abcdef";
	char ch3[] = "abzdef";
	int res;

	res = _strcmp(ch1, ch2);
	printf("%d\n", res);
	res = _strcmp(ch1, ch3);
	printf("%d\n", res);

	return (0);
}
