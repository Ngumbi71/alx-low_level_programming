#include "main.h"
/**
 * _puts - program prints string to stdout
 * @str: string to be printed
 * _putchar - prints new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
