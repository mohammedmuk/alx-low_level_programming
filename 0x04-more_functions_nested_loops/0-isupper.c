#include <stdio.h>
#include "main.h"

/**
 * _isupper - check character is upper or lower
 * @ch: character
 * Return: ch
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
