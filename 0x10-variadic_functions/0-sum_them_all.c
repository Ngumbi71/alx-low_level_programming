#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - Returns sum of all parameters
 * @n: number of parameters passed to function
 * @...: variable number of parameters to calculate sum
 * Return: 0 if n == 0, else sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
