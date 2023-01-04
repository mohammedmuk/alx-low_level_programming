#include <stdio.h>
#include "main.h"

/**
 * strln - calculate length of string
 * @s: string
 * @i: number
 *
 * Return: i
 */

int strln(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		return (strln(s, i));
	}
	return (i);
}

/**
 * _strlen_recursion - call strln function
 * @s: string
 * Return: strln(s,0);
 */

int _strlen_recursion(char *s)
{
	return (strln(s, 0));
}
