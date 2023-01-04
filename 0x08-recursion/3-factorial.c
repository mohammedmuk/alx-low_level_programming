#include <stdio.h>
#include "main.h"

/**
 * factorial - return n!
 * @n: number
 *
 * Return: n * factorial(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
