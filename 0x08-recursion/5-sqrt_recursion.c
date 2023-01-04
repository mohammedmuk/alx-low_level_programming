#include <stdio.h>
#include "main.h"

/**
 * sqr -  sqrt number
 * @n: number1
 * @i: number2
 * Return: sqr(n ,i + 1)
 */

int sqr(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}

	else if (sq == n)
	{
		return (i);
	}

	return (sqr(n, i + 1));
}
/**
 * _sqrt_recursion - return sqr function
 * @n: number
 * Return: sqr(n, i)
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
