#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function that prints the content of a linked list
 * @h: Pointer to the head of a linked list
 * Return: Always 0 (Success)
 */
size_t print_list(const list_t *h)
{
	list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%s, %d\n", temp->str, temp->len);
		temp = temp->next;
	}
	return (0);
}
