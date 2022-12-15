#include <stdio.h>
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{

int r = positive_or_negative(0);

if (r == 0)
{
printf("%d is zero", r);
}
return (0);
}
