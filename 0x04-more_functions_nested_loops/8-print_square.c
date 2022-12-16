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
		for (w = 1; w <= size; w++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	putchar('\n');
}
