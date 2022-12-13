#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *@n: an integer number n
 * Return: 0
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		_putchar("%d", n);
	}
	else
	{
		abs = n * -1;
		_putchar("%d", abs);
	}
	_putchar('\n');
}
