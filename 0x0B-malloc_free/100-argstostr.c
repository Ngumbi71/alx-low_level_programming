#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, n, x = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			y++;
	}

	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		str[x] = av[a][n];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	return (str);
}
