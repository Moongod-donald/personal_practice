#include "main.h"

/**
 * _strlen - calculates the length of string
 * @s: the string to calculate
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
