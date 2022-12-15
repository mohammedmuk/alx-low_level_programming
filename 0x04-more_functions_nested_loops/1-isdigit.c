#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check value is it parameter or not
 * @c: digit
 * Return: c
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
