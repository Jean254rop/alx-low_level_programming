#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint - a function that returns the nth node of a list
 * @head: pointer to the head
 * @index: node
 * return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
