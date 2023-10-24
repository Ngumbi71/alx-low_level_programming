#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where memory is stored
 * @src: ehere meory is stored
 * @n: number of bytes
 * Return: the copied meemory with n ytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
