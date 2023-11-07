#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: the width input
 * @height: the height input
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **k;

	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		k[a] = malloc(sizeof(int) * width);
		if (k[a] == NULL)
		{
		for (; a >= 0; a++)
			free(k[a]);
		free(k);
		return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
	for (b = 0; b < width; b++)
		k[a][b] = 0;
	}
	return (k);
}
