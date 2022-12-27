#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);

				continue;
			}
			printf("%d, ", i);
		}
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);

				continue;
			}

			printf("%d, ", i);
		}
	}

	printf("\n");
}
