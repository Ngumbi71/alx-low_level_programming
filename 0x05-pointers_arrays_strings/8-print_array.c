#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: array name
 * @n: number of elements of array to be printed
 * Return: inputs a and n
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < (n - 1); w++)
	{
		printf("%d, ", a[w]);
	}
		if (w == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
