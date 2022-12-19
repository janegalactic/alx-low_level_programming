#include "main.h"

/**
 * _strcpy - copies string pointed by src
 * @dest: char one
 * @src: char three
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
