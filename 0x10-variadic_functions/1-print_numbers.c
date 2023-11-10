#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to function
 * @...: variable of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int a;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));

		if (a !=  (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
