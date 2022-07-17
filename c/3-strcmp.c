#include "main.h"

/**
 * str_cmp - compares two strings
 * @ch1: the first string parammeter
 * @ch2: the second string parameter
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i])
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}

		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}


	return (0);
}
