#include "function_pointers.h"
/**
 * int_index - if true returns index place, else -1
 * @array: an array
 * @size: elemts size in an array
 * @cmp: pointer to function of one of three in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
