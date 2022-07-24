#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - get the first occurrence of any of the bytes int accept in s
 * @s: string 1
 * @accept: string 2
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
