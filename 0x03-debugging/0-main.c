#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * postitive_or_negative - prints 
/**
 * main - main block
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
