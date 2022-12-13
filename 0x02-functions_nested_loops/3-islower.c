#include <stdio.h>
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
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}
