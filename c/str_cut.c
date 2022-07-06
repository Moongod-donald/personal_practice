#include <stdio.h>

/**
 * main - a program that copies it's input to output
 * replacing each string of one or more blanks by a single blank
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char ch[100] = "This  is a test aa     ns  to show that     thsi work";

	while (ch[i] != '\0')
	{
		if (ch[i] == ' ')
		{
			if (ch[i + 1] == ' ')
				ch[i + 1] = '\b';
		}
		i++;
	}

	printf("%s\n", ch);
	return (0);
}
