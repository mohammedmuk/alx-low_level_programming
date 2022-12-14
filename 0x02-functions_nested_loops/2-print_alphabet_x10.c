#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet for ten times
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
int num, ch;
for (num = 0; num < 10; num++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
