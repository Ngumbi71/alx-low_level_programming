#include "main.h"

/**
 * times_table - prints 9 times table from 0
 * Return: empty output
 */

void times_table(void)

{
	int k, l, m, n, o;

	for (k = 0; k <= 9; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	m = k * l;
	if (m > 9)
	{
	n = m % 10;
	o = (m - n) / 10;
	{
	_putchar(44);
	_putchar(32);
	_putchar(o + '0');
	_putchar(n + '0');
	}
	else
	{
	if (l != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(m + '0');
	}
	}
	_putchar('\n');
	}
	}
}
