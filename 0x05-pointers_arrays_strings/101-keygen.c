#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);

	return (0);
}
