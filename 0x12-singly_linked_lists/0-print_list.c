#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 *print_list - prints all elements of a list
 *@h: the list
 *return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
nodes++;
h = h->next;
}
return (nodes);
}
