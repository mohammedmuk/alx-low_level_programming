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
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
return (-1);
putchar('-');
}
}
