#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * @num: number
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}
