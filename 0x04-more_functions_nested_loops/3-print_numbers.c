#include "main.h"
/**
 * print_numbers - checks for digits from 0 to 9
 * @c - integer
 * Return: 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
