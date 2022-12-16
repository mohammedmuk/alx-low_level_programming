#include <stdio.h>
#include "main.h"

/**
 * print_square - print square
 * @size: number
 *
 * Return: no return
 */

void print_square(int size)
{
	int h, w;

	for (h = 1; h <= size; h++)
	{
		if (size <= 0)
		{
			putchar('\n');
		}
		for (w = 1; w <= size; w++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
