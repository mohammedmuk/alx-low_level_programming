#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet()
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
}
#endif
