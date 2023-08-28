#include "main.h"
/**
 * _strchr: func prints a pointer to the first occurrence of the character c
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] ==  c)
			return (&s[i]);
	}
	return (0);
}
