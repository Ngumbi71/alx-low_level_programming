#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of linked list
 * @h: pointer to list_t list to print
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (x);
}
