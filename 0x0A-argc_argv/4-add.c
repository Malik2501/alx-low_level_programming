#include "main.h"
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: number of argument
 * @argv: array if argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char ofleg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtel(argv[i], ofleg, 10);
		if (ofleg)
		{
			printf("error\n");
			return (1);
		}
		else
		{
			sum == n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
