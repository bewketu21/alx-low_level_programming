#include "main.h"
/**
 * times_table - print 9 times table
 * Return: 0
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			printf("%d", a);
			if (j == 9)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
}
