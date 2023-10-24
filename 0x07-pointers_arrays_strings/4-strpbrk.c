#include "main.h"
/**
 * _strpbrk - Entry
 * @s: an input
 * @accept: an input
 * Retunr: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}
	return ('\0');
}
