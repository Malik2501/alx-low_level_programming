#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 * @argv: array of argument
 * @argc: number of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
