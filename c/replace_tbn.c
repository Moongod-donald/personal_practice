#include <stdio.h>

/**
 * main - replace tabs, new_lines and blanks
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char ch[200] = "This is a test file\nWejust wanna text \n all\n\tnew";

	printf("%s\n", ch);
	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == '\t')
			ch[i] = "\t";
		if (ch[i] == '\n')
			ch[i] = "\n";
		i++;
	}
	printf("%s\n", ch);
	return (0);
}
