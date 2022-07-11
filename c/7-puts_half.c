#include "main.h"

/**
 * puts_half - prints halve of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, halve, len;

	while (str[i])
	{
		i++;
	}
	len = i;
	if (i % 2 == 0)
	{
		halve = i / 2;
		while (halve <= len)
		{
			_putchar(str[halve]);
			halve++;
		}
	}
	else if (i % 2 != 0)
	{
		halve = (i - 1) / 2;
		while (halve < len)
		{
			_putchar(str[halve]);
			halve++;
		}
	}
	_putchar('\n');
}
