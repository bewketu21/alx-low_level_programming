#include <stdio.h>
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}
