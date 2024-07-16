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
	while (h != NULL)
	{
		printf("%s, %d\n", h->str, h->len);
		h = h->next;
	}
	return (0);
}
