#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns number of elements in a linked list
 * @h: Pointer to the head of a linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int x;

	x = 0;
	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
