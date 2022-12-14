#include "main.h"
/**
 * main - main block
 * Description: adding the previous two terms
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, c;
	float d;

	while (1)
	{
		c = a + b;

		if (c > 4000000)
		{
			break;
		}
		if ((c % 2) == 0)
		{
			d = d + c;
		}

		a = b;
		b = c;
	}
	printf("%.0f\n", d);

	return (0);
}
