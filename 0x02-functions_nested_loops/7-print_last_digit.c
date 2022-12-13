#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * Return: the value of the digit
 */
int print_last_digit(int a)
{
	if ( a < 0)
	{
		a = -1 * a % 10;
		return (a);
	}
	else
	{
		a = a % 10;
		return (a);
	}
}
