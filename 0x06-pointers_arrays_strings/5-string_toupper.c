#include <stdio.h>
#include "main.h"

/**
 * string_toupper - convert string from lower to upper
 * @x : string
 *
 * Return: x
 */

char *string_toupper(char *x)
{
	int num;

	num = 0;

	while (x[num] != '\0')
	{
		if (x[num] >= 97 && x[num] <= 122)
		{
			x[num] = x[num] - 32'
		}
		num++;
	}
	return (x);
}
