#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @k: a string k
 * Return: k
 */
char *leet(char *k)
{
	int a, b = 0;

	int d[] = {97, 101, 111, 116, 108};
	int e[] = {65, 69, 79, 84, 76};
	int f[] = {52, 51, 48, 55, 49};

	while (k[b] != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (k[b] == d[a] || k[b] == e[a])
			{
				k[b] = f[a];
				break;
			}
		}
		b++;
	}
	return (k);
}
