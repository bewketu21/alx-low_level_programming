#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: an integer n
 * Return: void
 */
void print_number(int n)
{
	if (n != 0)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
