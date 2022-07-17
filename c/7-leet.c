#include "main.h"

/**
 * leet - converts code to leet
 * @s: accepts a string argument
 *
 * Return: char
 */
char *leet(char *s)
{
	char ch1[] = "aeotl";
	char ch2[] = "AEOTL";
	char ch3[] = "43071";
	int i, j, len;

	i = len = 0;

	while (ch1[len])
		len++;

	while (s[i])
	{
		for (j = 0; j < len; j++)
		{
			if ((s[i] == ch1[j]) || (s[i] == ch2[j]))
			{
				s[i] = ch3[j];
			}
		}
		i++;
	}
	return (s);
}
