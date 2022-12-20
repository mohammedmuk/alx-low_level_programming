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
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
		{
			putchar(str[num]);
		}
		num++;
	}
	putchar('\n');
}
