#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to count
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;
	return (b);
}
