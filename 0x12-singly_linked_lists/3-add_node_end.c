#include "lists.h"

/**
 * add_node_end - adds new node
 * @head: linked list head
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t nc;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nc = 0; str[nc]; nc++)
		;

	n->len = nc;
	n->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = n;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}

	return (*head);
}
