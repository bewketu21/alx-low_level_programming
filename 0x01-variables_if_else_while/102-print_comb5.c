#include <stdio.h>
/**
 * main - main block
 * Description: hgjkkl ygiu yug j
 * Return: 0
 */
int main(void)
{
	int first_nums;
	int second_nums;

	for (first_nums = 0; firt_nums < 100; firt_nums++)
	{
		for (second_nums = first_nums + 1; second_nums < 100; second_nums++)
		{
			putchar(firt_nums / 10 + '0');
			putchar(first_nums % 10 + '0');

			putchar(' ');

			putchar(second_nums / 10 + '0');
			putchar(second_nums % 10 + '0');

			if (firt_nums == 98 && second_nums == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
