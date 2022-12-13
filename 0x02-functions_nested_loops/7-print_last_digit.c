#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * @a: input number
 * Return: the value of the digit
 */
int print_last_digit(int a)
{
	int last;

	if ( a < 0)
	{
		last = -1 * (a % 10);
	}
	else
	{
		last = a % 10;
	}
	_putchar(last + '0');
	return (last);
}
