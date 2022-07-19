#include "main.h"

/**
 * _memset - fills the first n bytes of mem pointed to with @buffer bytes
 * @s: the char to get the char from
 * @b: the buffer to the the char to
 * @n: the bytes to fill into
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
