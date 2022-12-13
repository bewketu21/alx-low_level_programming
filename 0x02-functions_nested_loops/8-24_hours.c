#include "main.h"
/**
 * jack_bauer - prints the every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		printf("%d", i)
		for (j = 0; j <= 59; j++)
		{
			printf(":%d", j)
		}
	}
}
