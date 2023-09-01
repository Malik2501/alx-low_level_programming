#include "main.h"
#include <stdio.h>
/**
 * main - print all programs it recieves
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
