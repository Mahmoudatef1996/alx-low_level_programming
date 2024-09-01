#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that free list
 * @head: the first node in the list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{
			current = head;
			free(current);
		}
	}
}
