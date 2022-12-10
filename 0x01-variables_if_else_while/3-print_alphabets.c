#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch_1, ch_2;
ch_1 = 'a';
ch_2 = 'A';
while (ch_1 <= 'z')
{
putchar(ch_1);
ch_1++;
}
while (ch_2 <= 'Z')
{
putchar(ch_2);
ch_2++;
}
printf("\n");
return (0);
}
