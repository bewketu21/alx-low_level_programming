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
	int d, b = 0;
	int *end = a + n - 1;

	if(a && n > 1)
	{
		while(end > a)
		{
			d = *a;
			*a++ = *end;
			*end-- = d;
		}
	}
	return (a);
}
