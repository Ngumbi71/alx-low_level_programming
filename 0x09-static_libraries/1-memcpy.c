#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memeory where its stored
 * @src: memory where its stored
 * @n: the number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
