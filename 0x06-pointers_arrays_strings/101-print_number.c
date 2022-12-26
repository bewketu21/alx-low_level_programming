#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	if (n / 10 != 0)
	{
		_putchar(n % 10);
		print_number((n - n % 10) / 10);
	}

	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar(n % 10);
	}
	
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar(-n % 10);
	}
}
