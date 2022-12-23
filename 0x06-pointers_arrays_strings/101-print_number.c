#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	char last;
	int reversed = 0;

	if (n < 0)
	{
		_putchar('-');
		last = (char) ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		last = (char) (n % 10) + '0';
		n /= 10;
	}

	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}

	while (reversed > 0)
	{
		char c = (char) ((reversed % 10) + '0');
		_putchar (c);
		reversed /= 10;
	}
	_putchar(last);
}
