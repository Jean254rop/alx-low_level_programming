#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - a function that Prints all the elements of a listint_t
 * @h: pointer to the head
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
