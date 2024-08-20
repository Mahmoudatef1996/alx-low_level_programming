#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - function that add anew node at the beginning
 * @head: the pointer of the first element in the list
 * @n: the data tht will be added to the new node
 * Return: return the addres of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
