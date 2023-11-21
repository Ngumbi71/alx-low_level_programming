#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node at beginning of linked list
 * @head: double pointer to list_t list
 * @str: new string to add in node
 * Return: address of new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *y;
	unsigned int len = 0;

	while (str[len])
		len++;

	y = malloc(sizeof(list_t));
	if (y == NULL)
		return (NULL);

	y->str = strdup(str);
	y->len = len;
	y->next = *head;
	*head = y;

	return (y);
}
