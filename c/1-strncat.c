#include "main.h"

/**
 * strncat - concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * @n: bytes to copy
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len, b;

	i = len = b = 0;

	while (dest[len])
		len++;

	while (src[i])
		i++;

	if (n > i)
		n = i;

	while (b < n)
	{
		dest[len] = src[b];
		b++;
		len++;
	}
	return (dest);
}
