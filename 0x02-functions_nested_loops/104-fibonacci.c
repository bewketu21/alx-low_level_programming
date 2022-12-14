#include "main.h"
/**
 * number_length - main block
 * @n: integer number
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int number_length(int n)
{
	int len = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		len = len + 1;
	}

	return (len);
}
/**
 * main - main block
 * Description: Prints the first 98 numbers
 * Return: 0
 */
int main(void)
{
	int c, a;
	unsigned long b = 1, d = 2, T, max = 100000000, bo = 0, d0 = 0, sum = 0;

	for (c = 1; c <= 98; c++)
	{
		if (bo > 0)
			printf("%lu", bo);
		a = number_length(max) - 1 - number_length(b);

		while (bo > 0 && a > 0)
		{
			printf("%d", 0);
			--a;
		}
		printf("%lu", b);

		T = (b + d) % max;
		sum = bo + d0 + (b + d) / max;
		b = d;
		bo = d0;
		d = T;
		d0 = sum;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
