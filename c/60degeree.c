#include <stdio.h>

/**
 * print_chessboard - prints the chess board
 * @a: char multi-dimen array holding the chess
 *
 * Return: void.
 */
void print_(char (*a)[5])
{
	int i;
	while (a[i])
	{
		if (i % 2)
			printf(" ");
		printf("%s\n", *(a + i));
		i++;
	}
}

int main(void)
{
	char ai[3][5] = {
		{'a', 'b', 'f', 'g', 'h'},
		{'e', 'r', 'y', 'u', 'i'},
		{'q', 'e', 'r', 'y', 'u'}
	};
	print_(ai);
	return (0);
}
