#include <stdio.h>
#include "main.h"

/**
 * main - Entry point function
 * @argc: number of arrgument
 * @argv: arrguments in array
 *
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
