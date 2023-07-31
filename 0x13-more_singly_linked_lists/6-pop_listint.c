#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a list
 *@head: pointer head
 *return: 0 if list is empty else returns a node
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;
if (*head == NULL)
return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
