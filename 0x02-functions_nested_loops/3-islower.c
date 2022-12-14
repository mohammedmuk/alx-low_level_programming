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
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (c == ch)
{
return (1);
}
else if (c == 122)
{
return (0);
}
}
}
