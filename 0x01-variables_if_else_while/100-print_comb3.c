#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i, c, num = '1';

	for (i = '0'; i <= '8'; i++)
	{
		if (i > '0')
		{
			++num;
		}

		for (c = num; c <= '9'; c++)
		{
			putchar(i);
			putchar(c);

			if (i == '8' && c == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
