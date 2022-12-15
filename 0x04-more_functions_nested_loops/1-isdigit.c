#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check value is it parameter or not
 * @num: digit
 * Return: num
 */
int _isdigit(int num)
{
	if (num >= 0 && num <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
