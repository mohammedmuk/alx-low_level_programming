#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 without 2 and 4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
if (num == '2')
{
continue;
}
else if (num == '4')
{
continue;
}
_putchar(num);
}
_putchar('\n');
}
