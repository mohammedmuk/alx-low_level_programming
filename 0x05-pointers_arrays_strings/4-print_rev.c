#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - reverse string
 * @s: string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int num;

	for (num = strlen(s); num >= 0; num--)
	{
		putchar(s[num]);
	}
	putchar('\n');
}
