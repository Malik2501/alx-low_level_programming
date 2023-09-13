#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - select the current function to perform
 * the operation asked by the user
 * @s: the operation passed as argument
 * Return: a pointer to the function corresponding
 * to the operation given as a parameter
 */
int (get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

