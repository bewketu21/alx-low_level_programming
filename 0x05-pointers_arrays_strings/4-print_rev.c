#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: a pointer to an int
 * Return: void
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
