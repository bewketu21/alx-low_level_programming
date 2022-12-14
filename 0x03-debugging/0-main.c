#include "main.h"
/**
 * postitive_or_negative - prints
 * @i: an integer i
 * Return: 0
 */
void postitive_or_negative(int i)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;

	positive_or_negative(int i);

	return (0);
}
