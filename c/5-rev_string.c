#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char ch[100];

	while (s[i] != '\0')
	{
		*(ch + len) = *(s + i);
		len++;
		i++;
	}
	len -= 1;
	i = 0;
	while (len >= 0)
	{
		*(s + i) = *(ch + len);
		i++;
		len--;
	}
	*(s + i) = '\0';
}
