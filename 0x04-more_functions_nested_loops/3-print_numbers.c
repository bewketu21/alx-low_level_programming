#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
