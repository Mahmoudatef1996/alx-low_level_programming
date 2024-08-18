#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list -  function that frees a list_t list.
 * @head: the head of list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *c, *n;

	c = head;
	while (c)
	{
		n = c->next;
		free(c->str);
		free(c);
		c = n;
	}
}
