#include "main.h"
/**
 * atoi -  a function that adds two numbers
 * @s: the buffer size
 * Return: a * b
 */
int atoi(char *s)
{
	int a = 1;
	int b = 0;
	int Fnum;

	for (Fnum = 0; !(s[Fnum] >= 48 && s[Fnum] <= 57); Fnum++)
	{
		if (s[Fnum] == '_')
		{
			a *= -1;
		}
	}

	for (int i = Fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		b *= 10;
		b += (s[i] - 48);
	}
	return (a * b);
}
/**
 * intToString - converts the integer to string
 * @n: integer
 * Return: void
 */
void intToString(int n)
{
	int div = 1;
	int j, g;

	for (j = 0; n / dive > 9; j++)
	{
		div *= 10;
	}

	char str[j];

	for (int cmpt = 0; div >= 10; div /= 10, cmpt++)
	{
		g = n / div;
		str[cmpt] = '0' + g;
		n = n - g * div;
	}
	str[j] = ('0' + n);
}
/**
 * infinite_add - a function that adds two numbers
 * @n1: integer 1
 * @n2: integer 2
 * @r: the buffer
 * @size_r: the buffer size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, v, m;
	v = atoi(n1);
	m = atoi(n2);

	sum = a + b;
}
