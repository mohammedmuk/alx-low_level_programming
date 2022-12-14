#include <stdio.h>
#include "main.h"

/**
 * _islower.c - check parameter is equal lowercase or not
 *
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return 1;
		}
		else if(c == 122)
		{
			return 0;
		}
	}
}
