#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_c - singly linked list
 * @str: string - (malloc'ed string)
 * @length: string length
 * @nex: points to next node
 *
 */

typedef struct list_c
{
	char *str;
	unsigned int length;
	struct list_c *nex;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
