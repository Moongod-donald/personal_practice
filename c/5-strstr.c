#include "main.h"
#include <stdio.h>

/**
 * strstr - compares two strings
 * @haystack: the first string to comapre it with
 * @needle: the second string to compare
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[i] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
