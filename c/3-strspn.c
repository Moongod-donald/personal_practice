#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: the prefix
 *
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (*accept == s[i])
			break;
		i++;
	}
	return (i + 1);
}
