#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @j: a character pointer
 * Return: j
 */
char *cap_string(char *j)
{
	int a = 0;

	while (j[a] != '\0')
	{
		if (j[a] >= 97 && j[a] <= 122)
		{
			if (a == 0)
			{
				j[a] -= 32;
			}
		}		
		if (j[a - 1] == 32 || j[a - 1] == 9 || j[a - 1] == 10 || j[a - 1] == 44 || j[a - 1] == 59 || j[a - 1] == 46 || j[a - 1] == 33 || j[a - 1] == 63 || j[a - 1] == 34 || j[a - 1] == 40 || j[a - 1] == 41 || j[a - 1] == 123 || j[a - 1] == 124)
		{
			j[a] -= 32;
		}
		a++;
	}
	return (j);
}
