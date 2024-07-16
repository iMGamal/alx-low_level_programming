#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function that prints the content of a linked list
 * @h: Pointer to the head of a linked list
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int x;

	x = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			x++;
		}
	}
	return (x);
}
