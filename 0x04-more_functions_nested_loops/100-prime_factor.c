#include "main.h"
/**
 * sqrt_of_number - find square root
 * @a: an integer
 * Return: square root of number a
 */
double sqrt_of_number(double a)
{
	float sqrt, b;

	sqrt = a / 2;
	b = 0;

	while (sqrt != b)
	{
		b = sqrt;
		sqrt = (a / b + b) / 2;
	}
	return (sqrt);
}
/**
 * largest_prime_factor - inds and prints the largest prime factor of
 * the number 612852475143
 * @num: number
 */
void largest_prime_factor(long int num)
{
	int p, lar;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (p = 3; p <= sqrt_of_number(num); p = p + 2)
	{
		while (num % p == 0)
		{
			num = num / p;
			lar = p;
		}
	}

	if (num > 2)
	{
		lar = num;
	}
	printf("%d\n", lar);
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
