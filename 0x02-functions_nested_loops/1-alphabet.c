#include <stdio.h>
/**
 * print_alphabet - prints the alphabet
 * main - main block`
 * Description - prit all the alpahbet letters in lowercase
 * Return: 0
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

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}
