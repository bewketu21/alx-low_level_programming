#include "main.h"
/**
 * main - main block
 * Description: print 0-putchar.c
 * Return: 0
 */
int main(void)
{
	char pr[] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
	{
		putchar(pr[a]);
	}

	putchar('\n');

	return (0);
}
