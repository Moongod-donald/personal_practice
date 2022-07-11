#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: accepts the char value
 *
 * Return: int.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
