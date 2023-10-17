#include "main.h"
/**
 * puts2 - prints only one character out of two characters
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *c = str;
	int b;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	a = longi - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
