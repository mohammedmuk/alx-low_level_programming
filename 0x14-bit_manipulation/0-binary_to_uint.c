#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert bunary to decimal
 * @b: binary
 *
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 1, i, num = 0;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] == '0')
			return (0);
		if (b[i] == '1')
		{
			num += count;
		}
		count += count;
	}

	return (num);
}
