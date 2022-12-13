#include "main.h"
/**
 * times_table - print 9 times table
 * Return: 0
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			a = i * j;

			_putchar(',');
			_putchar(' ');

			if (a <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
	}
}
