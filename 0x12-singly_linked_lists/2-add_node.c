#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds a node to a lonked list
 * @head: Pointer to a pointer that points to the head of a linked list
 * @str: String variable that represents the value stored in a node
 * Return: Always 0 (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *temp;

	char *s;

	s = strdup(str);
	temp = *head;
	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = s;
	new->len = strlen(s);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
