#include "main.h"
/**
 * _strchr - codes entry
 * @s: an input
 * @c: an input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
