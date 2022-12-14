#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - check if value of parameter is + or 0 or -
 *
 * @n: define a number
 * Return: 0 or 1
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
