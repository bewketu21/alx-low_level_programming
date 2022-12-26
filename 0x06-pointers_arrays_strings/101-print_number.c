#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	int last_digit, reverse;
	char c;

	if (n < 0)
	{
		_putchar('-');
		last_digit = (char) ('0' - (n % 10));
		n = -1 * n /10;
	}
	else
	{
		last_digit = (char) (n % 10 + '0');
		n = n / 10;
	}
	
	reverse = 0;

	while (n > 0)
	{
		reverse = reverse * 10 + (n % 10);
		n = n / 10;
	}

	while (reverse > 0)
	{
		c = (char) ((reverse % 10) + '0');
		_putchar(c);
		reverse = reverse / 10;
	}
	_putchar(last_digit);
}
