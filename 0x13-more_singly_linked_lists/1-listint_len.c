#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that Returns the number of elements in a link
 * @h: pointer
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
