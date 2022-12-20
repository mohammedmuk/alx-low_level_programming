#include <stdio.h>
#include "main.h"

/**
 * print_array - print numbers
 * @a: number1
 * @n: number2
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num == 4)
		{
			printf("%d", a[num]);
		}
		else
		{
			printf("%d, ", a[num]);
		}
	}
	printf("\n");
}
