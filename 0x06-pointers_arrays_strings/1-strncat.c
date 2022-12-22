#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - return concatenate two string
 * @dest: string1
 * @src: string2
 * @n: number of string 2
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int number_dest = 0, num;

	while (dest[number_dest] != '\0')
	{
		number_dest++;
	}

	for (num = 0; num < n && src[num] != '\0'; num++, number_dest++)
	{
		dest[number_dest] = src[num];
	}

	dest[number_dest] = '\0';

	return (dest);
}
