#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: a pointer to an int
 * Return: void
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	b = (a + 1) / 2;
	for (a = b; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
