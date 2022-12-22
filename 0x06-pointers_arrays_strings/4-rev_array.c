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
	int arr = a;
	int i;
	int temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
