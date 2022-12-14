#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
int num = (n % 10);
if (num < 0)
{
num = (-1 * num);
}
_putchar(num + '0');
return (num);
}
