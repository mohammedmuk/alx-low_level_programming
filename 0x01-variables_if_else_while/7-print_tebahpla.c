#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
printf("\n");
return (0);
}
