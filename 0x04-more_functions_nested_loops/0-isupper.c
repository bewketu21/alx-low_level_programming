#include "main.h"
/**
 * int _isupper - checks for uppercase character
 * @c: an integer
 * Return: Always 1 for uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
