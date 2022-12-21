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
	int d, b =0, c = n - 1;

	while(b < c)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
		b++;
		c--;
	}
}
