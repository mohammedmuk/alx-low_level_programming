#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare between two string
 * @s1: string1
 * @s2: string2
 *
 * Return: num2
 */

char _strcmp(char *s1, char *s2)
{
	int num, num2;

	num = 0;

	while (s1[num] == s2[num] && s1[num] != '\0')
	{
		num++;
	}

	num2 = s1[num] - s2[num];

	return (num2);
}
