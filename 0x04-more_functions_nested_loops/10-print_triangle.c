#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: triangle size
 * Return: 0
 */
void print_triangle(int size);
{
	int b, h;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
}
