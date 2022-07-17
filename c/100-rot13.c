#include "main.h"

/**
 * rot13 - encodes a string of alphabets
 * @s: accepts a string argument
 *
 * Return: char
 */
char *rot13(char *s)
{
	char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;

	while (s[i])
	{
		for (j = 0; ch1[j]; j++)
		{
			if (s[i] == ch1[j])
			{
				s[i] = ch2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
