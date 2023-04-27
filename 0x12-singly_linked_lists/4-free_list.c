#include "lists.h"

/**
 * free_list - frees list
 * @head: linked list head
 * Return: return 0
 */

void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
