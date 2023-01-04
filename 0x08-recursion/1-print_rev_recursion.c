#include "main.h"
#include <string.h>

/**
 * rev - reverce string
 * @s: string
 * @i: number
 *
 * Return: 0
 */

int rev(char *s, int i)
{
	if (i >= 0)
	{
		putchar(s[i]);
		rev(s, i - 1);
	}

	return (0);
}

/**
 * _print_rev_recursion - return rev function
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	rev(s, strlen(s) - 1);
}
