#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize a string
 * @s: string
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[num] == ' ' || s[num] == '\t' || s[num] == '\n'
		    || s[num] == ',' || s[num] == ';' || s[num] == '.'
		    || s[num] == '.' || s[num] == '!' || s[num] == '?'
		    || s[num] == '"' || s[num] == '(' || s[num] == ')'
		    || s[num] == '{' || s[num] == '}')
		{
			if (s[num + 1] >= 97 && s[num + 1] <= 122)
			{
				s[num + 1] = s[num + 1] - 32;
			}
		}
	num++;
	}
	return (s);
}
