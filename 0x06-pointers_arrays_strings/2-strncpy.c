#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: string to print
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + 1) = *(src + x);
	}
	for (; x < n; x++)
	{
	*(dest + 1) = '\0';
	}
	return (dest);
}
