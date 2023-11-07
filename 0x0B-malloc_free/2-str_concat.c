#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: an input one to concat
 * @s2: an input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	size_t a, b, c, d;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (d = 0; d <= b; d++)
	{
		ptr[c] = s2[d];
		c++;
	}
	return (ptr);
}
