#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
}

#endif
