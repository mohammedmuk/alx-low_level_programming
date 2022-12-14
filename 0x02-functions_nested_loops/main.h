#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet()
{
int ch;
for (ch ='a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}

#endif
