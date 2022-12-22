#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: an integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
		dest[a + b] = '\0';
	}
	return (dest);
}
