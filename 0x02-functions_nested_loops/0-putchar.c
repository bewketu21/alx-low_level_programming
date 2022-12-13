#include "main.h"
/**
 * main - main blockDescrip
 * tion: print 0-putchar.c
 * Return: 0
 */
int main(void)
{
	char pr[] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
	{
		_putchar(pr[a]);
	}

	_putchar('\n');

	return (0);
}
