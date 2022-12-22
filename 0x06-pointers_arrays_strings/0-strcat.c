#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: string1
 * @src: string2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

int number_dest = strlen(dest), number_src = strlen(src);
int all_numbers, num, num2;
all_numbers = number_dest + number_src;
for (num = 0, num2 = number_dest; num < number_src && num2 <
all_numbers; num++, num2++)
{
dest[num2] = src[num];
}
return (dest);
}
