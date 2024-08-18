#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer of head
 * @str: pointer of string
 * Return: return the address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	str = str - size;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->len = size;
	new_node->str = strdup(str);
	*head = new_node;
	return (new_node);
}
