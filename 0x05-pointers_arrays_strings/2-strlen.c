#include <stdio.h>
#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * @num: number
 *
 * Return: num
 */

int _strlen(char *s)
{

int num;

num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	return (num);
}
