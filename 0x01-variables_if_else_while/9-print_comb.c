#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = '0', k = ',', s = ' ';
while (num <= '9')
{
putchar(num);
if (num == '9')
{
break;
}
putchar(k);
putchar(s);
num++;
}
putchar('\n');
return (0);
}
