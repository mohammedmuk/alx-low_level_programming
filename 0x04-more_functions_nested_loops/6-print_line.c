#include <stdio.h>
#include "main.h"

/**
 * print_line - n is the number of times the character _ should be printed
 *@n: number
 * Return: no return
 */

void print_line(int n)
{
	int l = 1;

	while (l <= n)
	{
		if (n <= 0)
		{
			putchar('\n');
			break;
		}
		putchar('_');
		l++;
	}
	putchar('\n');
}
