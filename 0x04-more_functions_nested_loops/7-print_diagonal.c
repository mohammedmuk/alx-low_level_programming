#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					putchar(92);
					break;
				}
				putchar(' ');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
