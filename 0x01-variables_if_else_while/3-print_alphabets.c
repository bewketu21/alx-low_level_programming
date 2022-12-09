#include <stdio.h>
/**
 * main - main block
 * Description: prints both lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a', C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
