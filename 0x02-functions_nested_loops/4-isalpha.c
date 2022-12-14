#include <stdio.h>
#include "main.h"

/**
 * _isalpha - cheack is value equal alphabet or not
 * @c: value of parameter
 * Return: Always 0 (Success).
 */
int _isalpha(int c)
{
if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')
{
return (1);
}
else
{
return (0);
}
}
