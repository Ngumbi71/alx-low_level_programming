#include "main.h"
/**
 * _memset - function that fills a memory block with value
 * @s: starting address to be filled
 * @b: desired value
 * @n: byte number to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
