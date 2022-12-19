#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - print coupled numbers
 * @str: string
 *
 * Return: no return
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (str[num] % 2 == 0)
		{
			putchar(str[num]);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}
