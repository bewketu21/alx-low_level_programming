#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: integer number
 * Return: 0
 */
void print_square(int size)
{
	int n, a;

	for (n = 0; n < size && size > 0; n++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
