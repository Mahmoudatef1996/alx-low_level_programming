#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - function that prints all the elements of a list_t
 * @h: pointer to the head of linked list
 * Return: return number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
