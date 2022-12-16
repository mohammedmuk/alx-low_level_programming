#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
int num1, num2, num3, num4 = '1';

for (num1 = 0; num1 <= 9; num1++)
{
	for (num2 = '0'; num2 <= '9'; num2++)
	{
		putchar(num2);
	}

	for (num3 = '0'; num3 <= '4'; num3++)
	{
		putchar(num4);
		putchar(num3);
	}
	putchar('\n');
}
}
