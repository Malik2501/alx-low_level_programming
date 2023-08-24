#include "main.h"
/**
 * rev_array - functions that reverses the content of an array of integers
 * @n: number of element of array
 * @a: pointer to array
 * Return: void
 */
void rev_array(int *a, int n)
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
