#include "main.h"
/**
 * _strncat -ncancatenate two strings
 * @dest:an input value
 * @src: an input value
 * @n: an input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (a < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
