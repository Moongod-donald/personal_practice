#include <stdio.h>

/**
 * countvowels - counts the vowels in a perticular string
 * @c: the string
 *
 * Return: int
 */
int countvowels(char *c)
{
	int sum = 0, i;
	char vowels[5] = "aeiou";

	for (i = 0; i < 5; i++)
	{
		if (*c == vowels[i])
			sum += 1;
	}
	countvowels(c + 1);
	return (sum);
}

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%i\n", countvowels("Hello, World"));
	return (0);
}
