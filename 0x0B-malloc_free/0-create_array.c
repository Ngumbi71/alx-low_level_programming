#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of a size
 * and assigns char c
 * @size: the size of an array
 * @c: the char to assign
 * Return: a pointer to an array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
