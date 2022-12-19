#include "main.h"
/**
 * _numerical - if it is a number
 * @a: string
 * Return: if a number return 1
 */
int _numerical(unsigned int a)
{
	return (a >= '0' && a <= '9');
}
/**
 * _atoi - convert a string to an integer
 * @s: number
 * Return: the num
 */
int _atoi(char *s)
{
	unsigned int num; a;
	int b;

	for (a = 0; s[a]; != '\0'; a++)
	{
		if (_numerical(s[a]))
		{
			num = (s[a] - 48) + num * 10;

			if (s[a + 1] == ' ')
			{
				break;
			}
		}
		else if (s[a] == '-')
		{
			b *= -1;
		}
	}
	return (num *b);
}
