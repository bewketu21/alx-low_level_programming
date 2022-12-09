#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - to check whether the number is positive or negative
 * Description: get a random number and print the number
 * @n: an integer number
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

		n = rand() - RAND_MAX / 2;

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
