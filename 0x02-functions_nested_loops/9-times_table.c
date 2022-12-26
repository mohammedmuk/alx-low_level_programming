#include <stdio.h>
#include "main.h"

/**
 * times_table - print table of numbers
 *
 * Return: no return
 */

void times_table(void)
{
	int i, c, n;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
		{
			n = i * c;

			if (c == 9)
			{
				printf("%d", n);

				continue;
			}
			printf("%d, ", n);
		}

		putchar('\n');
	}
}
