#include "main.h"
/**
 * print_line - draws a straight line
 * @n: an integer number
 * Return: 0
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
