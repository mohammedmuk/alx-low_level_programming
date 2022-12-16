#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number form 0 to 9
 * @n: number
 *
 * Return: no return
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
