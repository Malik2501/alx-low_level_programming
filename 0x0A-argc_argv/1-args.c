#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argv: arrays of argument
 * @argc: number of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
