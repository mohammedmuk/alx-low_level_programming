#include <stdio.h>
#include "main.h"

/**
 * _strcmp - copy string
 * @dest: string1
 * @src: string2
 * @n: number of copy
 *
 * Return: dest
 */

char _strcmp(char *dest, char *src, int n)
{
	int byte;

	for (byte = 0; byte < n && src[byte] != '\0'; byte++)
	{
		dest[byte] = src[byte];
	}

	for (; byte < n; byte++)
	dest[byte] = '\0';

	return (dest);
}
