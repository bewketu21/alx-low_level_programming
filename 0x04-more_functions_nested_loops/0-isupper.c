#include "main.h"
/**
 * int _isupper(int c) - checks for uppercase character
 * Return: Always 1 for uppercase otherwise 0
 */
int _isupper(int c)
{
	for (c >= 65)
	{
		for (c <= 90)
		{
			return (1);
		}
	}

	for (c >= 97)
	{
		for (c <= 122)
		{
			return (0);
		}
	}
}
