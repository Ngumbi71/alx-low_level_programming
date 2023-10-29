#include "main.h"
/**
 * _memset - a program that fills a block of memeory with a specific value
 * @s: starting address of memeory to be filled
 * @a: the desired value
 * @n: number of bytes to be changes
 * Return: change the array with new value for n bytes
 */
char *_memset(char *s, char a, unsigned int n)
{
	int p = 0;
		for ( ; n > 0; p++)
		{
			s[p] = a;
			n--;
		}
	return (s);
}

