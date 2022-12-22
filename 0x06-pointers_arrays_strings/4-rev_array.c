#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: pointer a
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int b = n - 1;

	while (i < b)
	{
		temp = a[i];
		a[i] = a[b];
		a[b] = temp;
		i++;
		b--;
	}
}
