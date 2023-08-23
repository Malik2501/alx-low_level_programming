#include "main.h"
/**
 * puts2 - prints characters of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
		z++;
	}
	putchar('\n');
}
