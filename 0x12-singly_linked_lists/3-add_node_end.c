#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end -  adds new node at end of linked list
 * @head: double pointer to list_t list
 * @str: string to put new node
 * Return: address of new element, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k;
	list_t *y = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);

	k->str = strdup(str);
	k->len = len;
	k->next = NULL;

	if (*head == NULL)
	{
		*head = k;
		return (k);
	}

	while (y->next)
	y = y->next;

	y->next = k;

	return (k);
}
