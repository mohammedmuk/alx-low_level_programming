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
	int i, n;
	char arrc[100];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (n = 0; s[i] != '\0'; n++)
			{
				arrc[n] = s[i];
				i++;
			}
			break;
		}
	}

	return arrc;
}

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (s != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
