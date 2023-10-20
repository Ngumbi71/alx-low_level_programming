#include "main.h"
/**
 * reverse_array - reverses an array of integer
 * @a: array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int m;

	for (k = 0; k < n--; k++)
	{
		m = a[k];
		a[n] = m;
	}
}
