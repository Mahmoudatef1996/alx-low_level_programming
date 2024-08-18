#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer of head
 * @str: pointer of string
 * Return: return the address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
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
	new_node->next = NULL;
	new_node->len = size;
	new_node->str = strdup(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
