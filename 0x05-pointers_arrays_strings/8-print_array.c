#include "main.h"
#include <stdio.h>

/**
 * print_array - printing an array
 * @a: first int
 * @n: second int
 *
 * Return 0
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
		if (r != n - 1)
		printf("%d, ", a[r]);
		else
			printf("%d", a[r]);
printf('\n');
}
