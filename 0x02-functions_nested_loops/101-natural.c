#include "main.h"
/**
 * main - main block
 * Description: finds the sum of multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int Tot, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			Tot = Tot + n;
		}
	}
	printf("%d\n", Tot);

	return (0);
}
