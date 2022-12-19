#include <stdio.h>
#include "main.h"

/**
 * _puts - print string
 * @str: string
 *
 * Return: no return
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		putchar(str[num]);
	}
	putchar('\n');
}
