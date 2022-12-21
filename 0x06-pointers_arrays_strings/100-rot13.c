#include "main.h"
/**
 * rot13 - a function that encodes a string
 * @l: a string
 * Return: l
 */
char *rot13(char *l)
{
	int a, b;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ou[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; l[a] != '\0'; a++)
	{
		if (b = 0; b < 54; b++)
		{
			if (((l[a] <= 'z' && l[a] >= 'a') || (l[a] <= 'Z' && l[a] >= 'A')) && l[a] == in[b])
			{
				l[a] = ou[b];
				break;
			}
		}
	}
	return (l);
}
