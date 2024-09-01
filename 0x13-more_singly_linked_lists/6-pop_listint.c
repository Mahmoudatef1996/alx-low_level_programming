#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list,
 * and returns the head node’s(n)
 * @head: the first node
 * Return: no return
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next;
	return (n);
}
