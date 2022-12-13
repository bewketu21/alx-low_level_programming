#include <stdio.h>
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
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
