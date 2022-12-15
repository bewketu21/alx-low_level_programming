#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: 0
 */
void print_diagonal(int n)
{
	int c = 0, d;`

	while(c < n && n > 0)
	{
		{
			for (d = 0; d < c; d++)
			_putchar(' ');
		}
		c++;
		_putchar('\\');
		_putchar('\n);
	}
	if (c <= 0)
		_putchar('\n');
}
