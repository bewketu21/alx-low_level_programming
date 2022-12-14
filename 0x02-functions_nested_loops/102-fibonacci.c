#include "main.h"
/**
 * main - main block
 * Description: Prints the first 50 fibonnacci num
 * Return: 0;
 */
int main(void)
{
	int c;
	unsigned long f1 = 0; f2 = 1, T;

	for (c = 0; c < 50; c++)
	{
		T = f1 + f2;
		printf("%lu", T);

		f1 = f2;
		f2 = T;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
	}
	return (0);
}
