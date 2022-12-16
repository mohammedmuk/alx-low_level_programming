#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers in ch
 * @ch: number
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

int ch = '0';

while (ch <= '9')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
