#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: the list
 * Return: no return
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *c;

	c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		count++;
		c = c->next;
	}
	return (count);

}
