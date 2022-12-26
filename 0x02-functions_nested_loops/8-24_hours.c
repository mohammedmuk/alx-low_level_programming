#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print hours of the day
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int i, c, n, d, num = '9';

	for (i = '0'; i <= '2'; i++)
	{
		for (c = '0'; c <= num; c++)
		{
			if (i == '2')
			{
				num = '3';
			}
			for (n = '0'; n <= '5'; n++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					putchar(i);
					putchar(c);
					putchar(':');
					putchar(n);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
