#include "main.h"

/**
 * print_line - draws a straight line
 * @n:character to check
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
