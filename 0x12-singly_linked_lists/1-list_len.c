#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: pointer to list_t list
 * Return: number of elements of list
 */
size_t list_len(const list_t *h)
{
	unsigned int k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
