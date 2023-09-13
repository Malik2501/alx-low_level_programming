#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print the result of simple operations
 * @argv: argument vector
 * @argc: argument count
 * Return: void
 */
int main(int __attribute__((__unused__)) argc, argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error"\n);
		rxit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}