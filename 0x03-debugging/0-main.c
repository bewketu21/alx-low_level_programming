#include "main.h"
/**
 * positive_or_negative - prints
 * @i: an integer i
 * Return: 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
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
