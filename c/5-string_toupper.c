#include "main.h"

/**
 * string_toupper - converts string to upper
 * @s: accepts the string
 *
 * Return: char.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
