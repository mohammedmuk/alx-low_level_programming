#include <stdio.h>
#include "main.h"

/**
 * leet - encode function
 * @s: string
 *
 * Return: s
 */

char *leet(char *s)
{
	int stringNum, leetNum;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringNum = 0;

	while (s[stringNum] != '\0')
	{
		leetNum = 0;

		while (lettNum < 10)
		{
			if (leetLetters[leetNum] == s[stringNum])
			{
				s[stringNum] = leetNums[leetNum];
			}
			leetNum++;
		}
		stringNum++;
	}
	return (s);
}
