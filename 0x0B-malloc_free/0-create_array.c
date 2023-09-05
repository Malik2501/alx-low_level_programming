#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of char
 * @c: char to be assigned
 * Description: create an array of chars
 * Return: pointer to array and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
