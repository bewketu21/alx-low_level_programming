#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @f: a character pointer f
 * Return: f
 */
char *string_toupper(char *f)
{
	int a = 0;

	while (f[a] != '\0')
	{
		if (f[a] >= 97 && f[a] <= 122)
		{
			f[a] = f[a] - 32;
		}
		a++;
	}
	return (f);
}
