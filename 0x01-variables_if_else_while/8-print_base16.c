#include <stdio.h>
#include <stdlib.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num, ch = 'a';
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
