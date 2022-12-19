#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: a pointer to int 1
 * @b: a pointer to int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
