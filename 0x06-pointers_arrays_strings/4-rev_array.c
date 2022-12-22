#include "main.h"

/**
 * reverse_array - reverse string of array
 * @a: int one
 * @n: int two
 *
 * Return: reverse string
 */

void reverse_array(int *a, int n)
{
	int x, c;

	for (x = 0; (x < (n - 1) / 2); x++)
		{
		c = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = c;
		}
}
