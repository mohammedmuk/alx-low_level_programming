#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse our array
 * @a: number1
 * @n: count
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int num, num2;

	n = n - 1;

	num = 0;

	while (num <= n)
	{
		num2 = a[num];
		a[num++] = a[n];
		a[n--] = num2;
	}
}
