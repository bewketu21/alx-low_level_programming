#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n >= 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
