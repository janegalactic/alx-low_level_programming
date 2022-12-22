#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: string one
 * @src: string two
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}
