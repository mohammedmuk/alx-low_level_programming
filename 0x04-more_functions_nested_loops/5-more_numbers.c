#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
int i, c, num, num1;

for (i = 0; i <= 9; i++)
{
	num = '0', num1 = '9';

	for (c = '0'; c <= num1; c++)
	{
		if (num == '1')
		{
			_putchar(num);
		}
		_putchar(c);

		if (c == '9' && num == '0')
		{
			c = '0';
			num++;
			num1 = '4';
		}
	}

	_putchar('\n');
}
}
