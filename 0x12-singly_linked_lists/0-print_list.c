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
	unsigned int x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		x++;
		h = h->next;
	}

	return (x);
}
