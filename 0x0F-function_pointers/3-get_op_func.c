#include "3-calc.h"
#include "stdlib.h"
/**
 * get_op_func - selects correct function to perform operation
 * as asked by user
 * @s: operator passed as argument
 * Return: pointer to function corresponding to operator given
 * as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL},
	};

	int x = 0;

	for (ops[x].op != NULL; *(ops[x].op) != *s; x++)

		return (ops[x].f);
}
