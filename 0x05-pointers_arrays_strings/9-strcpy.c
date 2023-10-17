#include "main.h"
/**
 * char *_strcpy - copy string poined to by src
 * @dest: copy to
 * @src: copy from
 * return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
