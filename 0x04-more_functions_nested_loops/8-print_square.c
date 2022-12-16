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

	for (h = 0; h <= size; h++)
	{
		for (w = 0; w <= size; w++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
