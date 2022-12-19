#include "main.h"

/**
 * print_rev - prints reverse
 * @s: char to check
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int b, n;

	n = 0;

	while (s[n] != '\0')
		n++;
	for (b = n - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
