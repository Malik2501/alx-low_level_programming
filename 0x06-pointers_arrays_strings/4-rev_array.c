#include "main.h"
/**
 * reverse_array - functions that reverses the content of an array of integers
 * @n: number of element of array
 * @a: pointer to array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter] = a[n];
		a[n--] = temporary;
	}
}
