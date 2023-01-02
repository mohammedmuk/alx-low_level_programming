#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - copy  memory str
 * @dest: string 1
 * @src: string 2
 * @n: number
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
