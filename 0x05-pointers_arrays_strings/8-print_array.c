#include <stdio.h>
/**
 * print_array - functions that print a element of an array of integers
 * followed by a new line.
 * @a: This is the input array
 * @n: This is the length of the array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
