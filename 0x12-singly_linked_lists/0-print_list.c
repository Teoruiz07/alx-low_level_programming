#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: singly linked list
 * Return: elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t t;

	t = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->length, h->str);
		h = h->nex;
		t++;
	}
	return (t);
}
