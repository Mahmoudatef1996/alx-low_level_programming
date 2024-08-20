#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - function that prints all the elements of a listint_t
 * @h: the list
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *c;

	c = h;
	while (c != NULL)
	{
		count++;
		c = c->next;
	}
	return (count);

}
