#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest:destination
 * @src: source
 * @n: an integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
