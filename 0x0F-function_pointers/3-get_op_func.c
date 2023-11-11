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
		{NULL, NULL}
	};

	int i = 0; /* initialize i */

	while (ops[i].op != NULL && *(ops[i].op) != *s) /* not match any operand */
		i++;

	return (ops[i].f);
}
