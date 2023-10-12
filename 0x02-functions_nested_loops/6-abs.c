#include "main.h"

/**
 * _abs - compute absolute value
 * @c: number to be computed
 * Return: absolute value of a number
 */

int _abs(int c)

{

	if (c > 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
