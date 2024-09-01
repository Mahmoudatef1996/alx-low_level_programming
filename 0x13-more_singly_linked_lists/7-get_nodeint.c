#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: the first node
 * @index: the index of node
 * Return: returns pointer of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (0);
		}
		current = current->next;
	}
	return (current);

}
