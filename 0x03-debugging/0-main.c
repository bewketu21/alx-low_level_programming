#include "main.h"
/**
 * positive_or_negative - prints whether the number is positive 
 * or negative
 * Return: 0
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;

	positive_or_negative(i);

	return (0);
}
