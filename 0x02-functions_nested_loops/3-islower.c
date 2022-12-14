#include <stdio.h>
#include "main.h"

/**
 * _islower - check parameter is equal lowercase or not
 *
 * @c: The character to print
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
if (c >= 'a' || c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
