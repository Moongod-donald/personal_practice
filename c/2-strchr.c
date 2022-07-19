#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns the position of the first occurrence of a char
 * @s: the string to be checked
 * @c: the char to be checked
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i])
		i++;

	while (s[j])
	{
		if (s[j] == c)
			break;
		j++;
	}
	if (j == i)
		return (NULL);
	return (s + j);
}
