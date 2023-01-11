#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arrguments
 * @argv: array of arrguments
 *
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int i, s;

	for (i = 0; i < argc; i++)
	{
		if (isalpha(argv[i]) == 1)
		{
			printf("Error\n");
			return (0);
		}
			s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}
