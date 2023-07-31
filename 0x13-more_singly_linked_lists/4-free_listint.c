#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
