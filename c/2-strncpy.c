#include "main.h"

/**
 * strncpy - copies a string to another
 * @dest: destination of string
 * @src: source of string
 * @n: bytes to copy
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;

	while (src[len])
		len++;

	while (i < n)
	{
		if (i == len)
			break;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
