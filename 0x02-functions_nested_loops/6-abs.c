#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *@n: an integer number n
 * Return: 0
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		printf("%d", n);
	}
	else
	{
		abs = n * -1;
		printf("%d", abs);
	}
}
