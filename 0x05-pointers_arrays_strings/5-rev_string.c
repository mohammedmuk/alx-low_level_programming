#include <stdio.h>
#include "main.h"
#include "string.h"

/**
 * rev_string - reverse string
 * @s: string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int num;

	for (num = strlen(s) - 1; num >= 0; num--)
	{
		putchar(s[num]);
	}
	putchar('\n');
}
