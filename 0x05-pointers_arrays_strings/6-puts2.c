#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: apointer of int
 * Return: void
 */
void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}

	_putchar('\n');
}
