#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lower case.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
}
