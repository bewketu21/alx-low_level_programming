#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to an int
 * Return: void
 */
void _puts(char *str)
{
	char *a;
	int b;

	for (b = 0; a[b]; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
}
