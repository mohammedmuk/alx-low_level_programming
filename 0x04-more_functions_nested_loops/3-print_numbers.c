#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number form 0 to 9
 * @ch: number
 *
 * Return: no return
 */

void print_numbers(int ch)
{
	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
