#include "main.h"
/**
 * _islower - checks if the character is lowercase
 *@c: an integer
 * Return: 1 if it is lowercase
 * 0 if it is not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
