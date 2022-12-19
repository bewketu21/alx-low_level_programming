#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a pointer
 * Return: void
 */
void rev_string(char *s)
{
	char *begin_c, *end_c, c;
	int a, count;
	int length = 0;

	for (a = 0; s[a]; a++)
	{
		length++;
	}

	count = length;

	begin_c = s;
	end_c = s;

	for (a = 0; a < count - 1; a++)
	{
		end_c++;
	}

	for (a = 0; a < count / 2; a++)
	{
		c = *end_c;
		*end_c = *begin_c;
		*begin_c = c;

		begin_c++;
		end_c--;
	}
}
