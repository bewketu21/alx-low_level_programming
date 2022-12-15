#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 1; a <= 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			b = c;

			if (c > 9)
			{
				_putchar(49);
				b = c % 10;
			}
			_putchar(b + 48);
		}
		_putchar('\n');
	}
}
