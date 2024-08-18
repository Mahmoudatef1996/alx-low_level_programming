#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list_t
 * @h: pointer to the head of linked list
 * Return: return number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("%s\n",current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}
	return count;
}
