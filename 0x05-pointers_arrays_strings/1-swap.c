#include <stdio.h>
#include "main.h"

/**
 * swap_int - switch the vlaues of parameters
 * @a: number 1
 * @b: number 2
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a, d = *b;

	*a = d;
	*b = c;
}
