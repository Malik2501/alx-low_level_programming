#include "main.h"
#include <stdio.h>

/**
 * buffer_prints - buffer print
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char @b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		print
		104-print_buffer.c
