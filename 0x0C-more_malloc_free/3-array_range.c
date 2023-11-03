#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of
 * integers order from min to max
 * @min: first value of array
 * @max: last value of array
 * Return: pointer to newly created array
 * else NULL if max of fails
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
