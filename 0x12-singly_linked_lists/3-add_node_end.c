#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @head: header of the list
 * @str: string to add
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_node_end = malloc(sizeof(list_t));
	list_t *p;
	unsigned int j = 0;

	if (new_node_end == NULL)
		return (NULL);
	while (str[j])
		j++;
		new_node_end->str = strdup(str);
		new_node_end->len = j;
		new_node_end->next = NULL;

			if (*head == NULL)

				*head = new_node_end;
			else
			{
			p = *head;
			while (p->next)
				p = p->next;

			p->next = new_node_end;
			}
			return (new_node_end);
	}
