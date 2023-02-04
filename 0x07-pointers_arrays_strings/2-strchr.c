#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - cut the string
 * @s: string 1
 * @c: string 2
 *
 * Return: vlaue
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		if (s[i + 1] == c)
			return (s + i + 1);
		i++;

	}

	return (0);
}
