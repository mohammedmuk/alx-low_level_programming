#include "main.h"

/**
 * print_number - print number
 * @n: number
 *
 * Return: void
 */

void print_number(int n)
{
	int i;
	char str[50];

	sprintf(str, "%d", n);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
