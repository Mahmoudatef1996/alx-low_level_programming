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
	listint_t *next;
	unsigned int i;

	if (index == 0)
		return (head);

	for (i = 0; i <= index; i++)
	{
		if ( head == NULL && i < index)
		{
			return (0);
		}
		next = head->next;
		head = next;
	}
	return (head);

}
