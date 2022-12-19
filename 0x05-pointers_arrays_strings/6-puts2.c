#include "main.h"

/**
 * puts2 - print every character
 * @str: the string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int str;

	for (str = 0; str[str] != '\0'; str++)
	if (str % 2 == 0)
		_putchar(str[str]);
	_putchar('\n');
}
