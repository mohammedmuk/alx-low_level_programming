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
	int num;

	for (num = strlen(str) / 2; str[num] != '\0'; num++)
	{
		putchar(str[num]);
	}
}
