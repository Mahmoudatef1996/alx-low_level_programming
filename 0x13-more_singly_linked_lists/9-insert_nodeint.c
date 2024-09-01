#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer for first node
 * @idx: the index
 * @n: the valuse of node
 * Return: returns pointer of inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *next;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	next = current->next;
	current->next = new_node;
	new_node->next = next;
	return (new_node);
}
