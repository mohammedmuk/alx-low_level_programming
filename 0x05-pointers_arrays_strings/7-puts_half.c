#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - print half of string
 * @str: string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int num = strlen(str) / 2;

	while (str[num] != '\0')
	{
		putchar(str[num]);
		num++;
	}
	putchar('\n');
}
