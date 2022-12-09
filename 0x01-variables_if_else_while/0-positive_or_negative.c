#include <stdio.h>
/**
 * main - to check whether the number is positive or negative
 * @n: an integer number
 *Return: 0
 */
int main(void)
{
	int n;

	if ( n > 0 )
	{
		printf("%d: is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d: is zero\n", n);
	}
	else
	{
		printf("%d: is negative\n", n);
	}
}
