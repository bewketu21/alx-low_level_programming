#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	int a = 1, b, c;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (b = 0; n / a > 9; n %= a, a /= 10)
	{
		c = n / a;
		_putchar('0' + c);
	}
}
