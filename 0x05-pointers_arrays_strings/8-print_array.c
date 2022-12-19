#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an int
 * @n: return value n
 * Return: void
 */
void print_array(int *a, int n)
{
	int d = 0;

	while (d < n)
	{
		printf("%d", a[d]);

		if (d < n - 1)
		{
			printf(", ");
		}
		d++;
	}
	printf("\n");
}
