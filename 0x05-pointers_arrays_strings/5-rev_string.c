#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int x = 0, b, c;
	char f;

	while (s[x] != '\0')
	{
		x++;
	}
	c = x - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		f = s[b];
		s[b] = s[c];
		s[c] = f;
	}
}
