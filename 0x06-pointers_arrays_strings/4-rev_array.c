#include "main.h"
/**
 * reverse_array - reverses an array of integer
 * @a: array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[n] = m;
	}
}
